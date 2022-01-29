# -*- coding: utf-8 -*-
import os
import sys
import re
import Parse_ast
import util
import pysnooper
import Cpp_sequence as cs

py_snooper_file_name = os.path.join('log', 'snooper.py')
py_variable_sequence_file = os.path.join('log', 'py_variable.log')
temp_output_file = os.path.join('log', 'temp.out')
temp_compile_file = os.path.join('log', 'temp')



if sys.platform == "linux":
    COMLINE_PY_COV = "timeout 5 coverage run %s<%s"
    COMLINE_PY_RUN = "timeout 5 python3 %s <%s >%s "
    COMLINE_CPP_COM = "g++ %s -o %s"
    COMLINE_CPP_RUN = "./%s <%s >%s"
    COMLINE_CPP_COV = "gcov %s"
else:
    COMLINE_PY_COV = "coverage run %s<%s"
    COMLINE_PY_RUN = "python %s <%s >%s "
    COMLINE_CPP_COM = "g++ %s -o %s"
    COMLINE_CPP_RUN = "%s <%s >%s"


def prepare_snooper_file(file_path):
    '''
    准备用于pysnooper的文件
    '''
    lines = util.read_file(file_path)
    for i in range(len(lines)):
        lines[i] = '    ' + lines[i]
    lines.insert(0, 'import pysnooper\n')
    lines.insert(1, 'with pysnooper.snoop(depth=2, output=\'' + py_variable_sequence_file + '\'):\n')
    util.write_file(py_snooper_file_name, lines)


def is_correct(temp_output_file, output_file):
    '''
    判断待测程序输出是否正确
    '''
    temp_output_str = util.read_file_by_str(temp_output_file)
    output_str = util.read_file_by_str(output_file)
    # print(temp_output_str)
    # print(output_str)
    if temp_output_str == output_str:  # 这里有时候因为末尾换行的关系会把对的判成错的，但是不影响实验结果
        return True
    else:
        return False

def run_snooper_file(test_dir_path):
    '''
    运行待测程序，并使用pysnooper
    '''
    res_list = []
    test_files = os.listdir(test_dir_path)
    for i in test_files:
        if ".in" not in i:
            continue
        # if "sample.in" not in i:
        #     continue
        input_file = os.path.join(test_dir_path, i)
        output_file = os.path.join(test_dir_path, i[: -2] + "out")
        
        util.clear_file(py_variable_sequence_file)
        cmd = COMLINE_PY_RUN % (py_snooper_file_name, input_file, temp_output_file)
        try:
            os.system(cmd)
        except:
            print('crashed')
            continue
        res = is_correct(temp_output_file, output_file)
        # print(i, res)
        variable_info = parse_py_snooper()
        # print(variable_info)
        res_list.append({
            'res': res,
            'info': variable_info
        })
        # break
    return res_list

def parse_py_snooper():
    '''
    解析pysnooper的输出
    '''
    variable_info = {}
    lines = util.read_file(py_variable_sequence_file)
    now_index = 1
    for line in lines:
        items = line.split(' ')
        items = list(filter(lambda item: item != '', items))
        # print(items)
        if len(items) <= 3:
            continue
        elif items[1] == 'line':
            now_index = int(items[2])
        elif len(items) >= 5 and items[4].find('<') != -1:
            continue
        elif items[1][0:3] == 'var' and items[2][0:2] != '__':
            variable_name = items[2]
            if variable_name not in variable_info:
                # variable_info[variable_name] = {}
                variable_info[variable_name] = []
            variable_value = items[4].replace('\n', '')         #变量不一定是数字
            # variable_info[variable_name][now_index] = variable_value
            variable_info[variable_name].append(variable_value)
    return variable_info

def get_py_variable_sequence(file_path, test_dir_path):
    '''
    获取py代码变量序列
    '''
    prepare_snooper_file(file_path)
    res_list = run_snooper_file(test_dir_path)
    return res_list

def get_cpp_variable_sequence(file_path, test_dir_path):
    '''
    获取cpp代码变量序列
    '''
    res_list = []
    cs.instrumentation(file_path)
    test_files = os.listdir(test_dir_path)
    for i in test_files:
        if ".in" not in i:
            continue
        # if "sample.in" not in i:
        #     continue
        print(i)
        input_file = os.path.join(test_dir_path, i)
        output_file = os.path.join(test_dir_path, i[: -2] + "out")
        info = cs.get_cpp_variable_sequence(input_file)
        if not info:
            raise Exception
            # return []
        cmd1 = COMLINE_CPP_COM % (file_path, temp_compile_file)
        os.system(cmd1)
        util.clear_file(temp_output_file)
        cmd2 = COMLINE_CPP_RUN % (temp_compile_file, input_file, temp_output_file)
        os.system(cmd2)
        res = is_correct(temp_output_file, output_file)
        # print(util.read_file(temp_output_file))
        res_list.append({
            'res': res,
            'info': info
        })
        # break
    # print(res_list)
    return res_list

if __name__ == "__main__":
    
    # file_path = r'..\data\3310\WA_py\518603.py'
    # test_dir_path = r'..\data\3310\TEST_DATA_TCG1'
    # print(get_py_variable_sequence(file_path, test_dir_path))

    ['128745.cpp', '151687.cpp', '154962.cpp', '155227.cpp', '155520.cpp', '155769.cpp', '155827.cpp', 
    '155894.cpp', '157936.cpp', '158035.cpp', '158067.cpp', '158727.cpp', '159139.cpp', '159568.cpp', 
    '159623.cpp', '160261.cpp', '160866.cpp', '161023.cpp', '194948.cpp', '197697.cpp', '210005.cpp', 
    '210219.cpp', '304358.cpp', '304706.cpp', '304710.cpp', '305060.cpp', '305702.cpp', '305771.cpp', 
    '305773.cpp', '306580.cpp', '306836.cpp', '307423.cpp', '355965.cpp', '356012.cpp', '356014.cpp', 
    '356384.cpp', '356450.cpp', '356525.cpp', '357458.cpp', '357612.cpp', '357919.cpp', '358458.cpp', 
    '358601.cpp', '359781.cpp', '364007.cpp', '364158.cpp', '364963.cpp', '367289.cpp', '375580.cpp', 
    '440311.cpp', '46056.cpp', '491025.cpp', '491082.cpp', '491091.cpp', '491372.cpp', '493606.cpp', 
    '495333.cpp', '499582.cpp', '50058.cpp', '50077.cpp', '50094.cpp', '50095.cpp', '50339.cpp', 
    '50360.cpp', '51749.cpp', '52777.cpp', '52944.cpp', '55797.cpp', '55810.cpp', '56282.cpp', 
    '58632.cpp', '58927.cpp', '70673.cpp', '70740.cpp', '82095.cpp', '82101.cpp', '82169.cpp', 
    '82237.cpp', '82329.cpp', '82345.cpp', '82353.cpp', '82462.cpp', '82655.cpp', '83208.cpp', 
    '83729.cpp', '83958.cpp', '84192.cpp', '84735.cpp', '84949.cpp', '85025.cpp', '85033.cpp', 
    '85069.cpp', '85662.cpp', '85672.cpp', '86072.cpp']

    
    file_path = r'D:\fault_loc\BUCT-data\3922\WA_c\540283.c'
    test_dir_path = r'D:\fault_loc\BUCT-data\3922\TEST_DATA_TCG1'
    print(get_cpp_variable_sequence(file_path, test_dir_path))
