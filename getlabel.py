# coding=utf-8

import os
import sys
import MinEditDistance as minedit
import util


def generate(acdir, wadir, tagdir):
    acfilelist = os.listdir(acdir)
    wafilelist = os.listdir(wadir)
    cnt = 0
    for wafile in wafilelist:
        cnt += 1
        minstep = 99999
        minpath = {}
        minresdic = {}
        pairacfile = ""
        dic = {}
        Sac = []
        Swa = []

        for acfile in acfilelist:
            acfilepath = os.path.join(acdir, acfile)
            wafilepath = os.path.join(wadir, wafile)
            print(acfilepath, wafile)
            dic, Sac, Swa, x1, x2  # = util.myencode(acfilepath, wafilepath)
            #加速
            if(abs(len(Sac)-len(Swa))>=minstep or x2>=minstep):
                continue
            res = minedit.minEditDistance(Swa, Sac)
            if res["step"] < minstep:
                minstep = res["step"]
                minpath = res["path"]
                pairacfile = acfile
                minresdic = dic
            if minstep == 1:
                break

        if minstep != 99999:
            tagfile = os.path.join(tagdir, str(cnt) + ".txt")
            content = []
            content.append(wafile)
            content.append(pairacfile)
            content.append(str(minstep))
            for i in minpath:
                temp = ""
                if "->" in i["target"]:
                    a, b = i["target"].split("->")
                    for key, value in minresdic.items():
                        if value == a:
                            a = key
                        if value == b:
                            b = key
                    temp = a + "<CHANGETO>" + b
                else:
                    for key, value in minresdic.items():
                        if value == i["target"]:
                            temp = key
                content.append(i["op"] + "<TAG>" + str(i["pos"]) + "<TAG>" + temp)
            # print(content)
            util.write_file(tagfile, content)
            # print(wafile, acfile, minstep,tagfile)

def re_generate(acdir, wadir, tagdir):
    '''
    '''
    tag_list = os.listdir(tagdir)
    for tag in tag_list:
        tag_path = os.path.join(tagdir, tag)
        lines = util.read_file(tag_path)
        # print(lines)
        wa_file = lines[0].replace('\n', '')
        ac_file = lines[1].replace('\n', '')
        wa_file_path = os.path.join(wadir, wa_file)
        ac_file_path = os.path.join(acdir, ac_file)
        # print(wa_file_path, ac_file_path)
        # break
        if os.path.exists(wa_file_path) and os.path.exists(ac_file_path):        
            print(wa_file_path, ac_file_path)
            wa_content = util.read_file(wa_file_path)
            ac_content = util.read_file(ac_file_path)
            res = minedit.minEditDistance(wa_content, ac_content)
            print(res)
            content = []
            content.append(wa_file)
            content.append(ac_file)
            tmp = ''
            for i in res["path"]:
                if len(tmp) != 0:
                    tmp += ','
                if(i['pos'] >= 3):
                    tmp += str(i['pos'])
            content.append(tmp)
            # for i in res["path"]:
            #     temp = ""
            #     if "->" in i["target"]:
            #         a, b = i["target"].split("->")
            #         for key, value in minresdic.items():
            #             if value == a:
            #                 a = key
            #             if value == b:
            #                 b = key
            #         temp = a + "<CHANGETO>" + b
            #     else:
            #         for key, value in minresdic.items():
            #             if value == i["target"]:
            #                 temp = key
            #     content.append(i["op"] + "<TAG>" + str(i["pos"]) + "<TAG>" + temp)
            # print(content)
            # break
    return

def work(datapath, problem_id, language, tagdir):
    problem_path = os.path.join(datapath, str(problem_id))
    acdir = os.path.join(problem_path, "AC_" + language)
    wadir = os.path.join(problem_path, "WA_" + language)
    # generate(acdir, wadir, tagdir)
    re_generate(acdir, wadir, tagdir)




if __name__ == "__main__":
    # languages = ['c', 'cpp', 'py']
    languages = ['c']
    datapath = r"D:\fault_loc\BUCT-data"
    problem_list = os.listdir(datapath)
    for i in problem_list:
        if '.' in i:
            continue
        for j in languages:
            path = os.path.join(datapath, str(i), "TAG_" + j)
            ok = os.path.exists(path)
            if not ok:
                os.makedirs(path)
            work(datapath, i, j, path)
            break
        break
