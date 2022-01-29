# -*- coding: utf-8 -*-
# import pylcs

from typing import List
import chardet

def read_file(file_name):
    '''
    读文件，并按行返回
    '''
    with open(file_name, "rb") as f:
        data = f.read() 
        result = chardet.detect(data) # 检测文件内容
    with open(file_name, 'r' ,encoding=result['encoding']) as f:
        lines = f.readlines()
    return lines

def read_file_by_utf8(file_name):
    '''
    已utf-8编码读文件，并按行返回
    '''
    with open(file_name, 'r' ,encoding='utf-8') as f:
        lines = f.readlines()
    return lines

def read_file_by_gbk(file_name):
    '''
    已gbk编码读文件，并按行返回
    '''
    with open(file_name, 'r' ,encoding='gbk') as f:
        lines = f.readlines()
    return lines

def read_file_by_str(file_name):
    '''
    读文件，并按字符串返回
    '''
    with open(file_name, 'r' ,encoding='utf-8') as f:
        str = f.read()
    return str

def write_file(file_name, str):
    '''
    （创建）写文件，从头开始覆盖，注意接收参数为列表
    '''
    with open(file_name, 'w+') as f:
        f.writelines(str)

def write_file_by_byte(file_name, str):
    '''
    （创建）以二进制写文件，从头开始，注意接收参数为列表
    '''
    with open(file_name, 'wb') as f:
        f.writelines(str)

def add_file(file_name, str):
    '''
    （创建）追加文件
    '''
    with open(file_name, 'a+') as f:
        f.writelines(str)

def clear_file(file_name):
    '''
    清空文件
    '''
    with open(file_name, 'r+') as f:
        f.seek(0)
        f.truncate()


def is_operator(ch):
    '''
    判断是否为特殊字符
    '''
    op_list = '!@#$%^&*()+{}|:\"<>?`-=[]\\;\',./ '
    op_list2 = '\t\n\r'
    # print(op_list)
    if op_list.find(ch) >= 0 or op_list2.find(ch) >= 0:
        return True
    else:
        return False

def find_pos(str1, str2):
    '''
    判断str2中是否含有变量str1
    '''
    str1_len = len(str1)
    while str2.find(str1) >= 0:
        pos = str2.find(str1)
        # print(pos, len(str2))
        if pos == 0 and is_operator(str2[pos + str1_len]):
            return True
        elif pos == len(str2) - str1_len - 1 and is_operator(str2[pos - 1]):
            return True
        elif is_operator(str2[pos - 1]) and is_operator(str2[pos + str1_len]):
            return True
        str2 = str2[pos + str1_len : len(str2)]
    return False


def collect_variable_info(variable_name_list, file_path):
    '''
    收集变量覆盖信息
    '''
    variable_info = []

    lines = read_file(file_path)
    for i in range(len(lines)):
        tmp_list = []
        for j in range(len(variable_name_list)):
            if find_pos(variable_name_list[j], lines[i]):
                tmp_list.append(variable_name_list[j])
        variable_info.append(tmp_list)
    return variable_info

def cal_LCS(list1, list2):
    '''
    求最长匹配子串（的长度）
    '''
    ss = []
    sss = []
    l1 = len(list1)
    l2 = len(list2)
    for i in range(l1 + 1):
        temp = []
        temp_s = []
        for j in range(l2 + 1):
            temp.append(0)
            temp_s.append([])
        ss.append(temp)
        sss.append(temp_s)
    for i in range(1, l1 + 1):
        for j in range(1, l2 + 1):
            if list1[i-1] == list2[j-1]:
                ss[i][j] = ss[i-1][j-1] + 1
                sss[i][j] = sss[i-1][j-1]
                sss[i][j].append(i-1)
                # 如果上一组对应相等，则在上一组所存匹配数加一
            else:
                if ss[i-1][j] > ss[i][j-1]:
                    ss[i][j] = ss[i-1][j]
                    sss[i][j] = sss[i-1][j]
                else:
                    ss[i][j] = ss[i][j-1]
                    sss[i][j] = sss[i][j-1]
                # 不相等就取前两种状态匹配数最大值
    # LCS_str = list(filter(lambda x: x!='', sss[l1][l2].split(' ')))
    return ss[l1][l2], sss[l1][l2]
    
    # 上面是直接用dp算法，python速度太慢了，
    # 当序列长度上万时，时间得一分钟，所以用pylcs
    # 这个包直接写的c++，大概能快几十倍
    # s1 = '|'.join(list1)
    # s2 = '/'.join(list2)
    # return pylcs.lcs(s1, s2)

def cal_KM(weight):
    '''
    二分图匹配
    '''
    from munkres import Munkres, print_matrix, make_cost_matrix
    
    weight_wa_keys = {}
    weight_ac_keys = {}
    matrix = []
    index = 0
    for key in weight:
        weight_wa_keys[index] = key
        index += 1

        row = []
        for i in weight[key]:
            row.append(weight[key][i])
        matrix.append(row)
    index = 0
    for i in weight:
        for j in weight[i]:
            weight_ac_keys[index] = j
            index += 1
        break

    # print_matrix(matrix, msg='matrix:')
    cost_matrix = make_cost_matrix(matrix)
    
    m = Munkres()
    indexes = m.compute(cost_matrix)
    vars_pair = {}
    # print_matrix(matrix, msg='Highest profits through this matrix:')
    # total = 0
    for row, column in indexes:
        value = matrix[row][column]
        vars_pair[weight_wa_keys[row]] = {
            'var': weight_ac_keys[column],
            'value': value
        }
        # total += value
        # print(f'({weight_wa_keys[row]}, {weight_ac_keys[column]}) -> {value}')
    # print(f'total profit={total}')
    # print(vars_pair)
    return vars_pair


if __name__ == "__main__":
    # print(cal_LCS( [2, 4], [1, 2, 3, 4]))
    # weight = {'n': {'n': 78, 'i': 1}, 'i': {'n': 0, 'i': 77}, 'j': {'n': 79, 'i': 80}}
    # weight = {'N': {'N': 7, 'w': 3, 'h': 3, 'i': 5, 'j': 3, 'k': 2, 'l': 1}, 
    # 'w': {'N': 3, 'w': 7, 'h': 3, 'i': 6, 'j': 0, 'k': 0, 'l': 1}, 
    # 'h': {'N': 3, 'w': 3, 'h': 7, 'i': 2, 'j': 0, 'k': 0, 'l': 1}, 
    # 'i': {'N': 4, 'w': 5, 'h': 5, 'i': 20, 'j': 13, 'k': 10}, 
    # 'j': {'N': 4, 'w': 5, 'h': 2, 'i': 40, 'j': 13, 'k': 39}}
    # print(cal_KM(weight))
    l1 = ['1', '2', '3', '4', '5', '6']
    l2 = ['1', '4', '2', '3', '5']
    print(cal_LCS(l1, l2))