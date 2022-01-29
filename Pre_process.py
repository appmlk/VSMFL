import os
import Snooper
import util

def del_description(wa_path):
    '''
    删注释
    '''
    wa_list = os.listdir(wa_path)
    for i in wa_list:
        file_path = os.path.join(wa_path, i)
        new_lines = []
        with open(file_path, 'r+') as f:
            lines = f.readlines()
            # print(file_path)
            st = 0
            ed = 0
            for i, line in enumerate(lines):
                if line.find('/*') >= 0:
                    st = i
                if line.find('*/') >= 0:
                    ed = i
                    break
            print(st, ed)

            for i, line in enumerate(lines):
                if i < st or i > ed:
                    new_lines.append(line)
                # print(new_lines)
        with open(file_path, 'w+') as f:
            f.writelines(new_lines)

def fix_style(dir_path):
    '''
    将代码格式化
    '''
    fail_list = []
    file_list = os.listdir(dir_path)
    for file_name in file_list:
        try:
            file_path = os.path.join(dir_path, file_name)
            # os.system('astyle --style=ansi -J --suffix=none %s' % file_path) # 参数含义见网址http://astyle.sourceforge.net/astyle.html
            os.system('astyle --style=ansi -p --suffix=none %s' % file_path) # 参数含义见网址http://astyle.sourceforge.net/astyle.html
            # lines = util.read_file(file_path)
            # # print(lines)
            # for i, line in enumerate(lines):
            #     if line == 'void main()\n' or 'main()\n' == line:
            #         # print(line)
            #         fail_list.append(file_path)
            #         lines[i] = 'int main()\n'
            #         break
            # util.write_file(file_path, lines)
        except:
            fail_list.append(file_path)
            pass
        # break
    print(fail_list)
    return fail_list

def add_header(dir_path):
    '''
    有些c++文件没有iostrem头文件
    '''
    fail_list = []
    file_list = os.listdir(dir_path)
    for file_name in file_list:
        file_path = os.path.join(dir_path, file_name)
        lines = util.read_file_by_gbk(file_path)
        flag = False
        for i, line in enumerate(lines):
            if ('using namespace' in line) and (';' not in line):
                print(file_name, line)
                flag = True
                break
        if flag:
            # print(file_name)
            fail_list.append(file_name)

    for file_name in fail_list:
        file_path = os.path.join(dir_path, file_name)
        lines = util.read_file_by_gbk(file_path)  
        st = 0         
        for i, line in enumerate(lines): 
            if 'using namespace' in line:
                lines[i] = 'using namespace std;\n'
                break
        # print(file_name, st)
        # lines.insert(st, 'using namespace std;\n')
        util.write_file(file_path, lines)
    return fail_list


def get_ac_res(ac_dir, test_dir_path, res_dir):
    '''
    将正确代码的变量变化序列记录下来，以便后期匹配
    '''
    fail_list = []
    if not os.path.exists(res_dir):
        os.mkdir(res_dir)
    ac_file_list = os.listdir(ac_dir)
    for ac_file in ac_file_list:
        ac_file_path = os.path.join(ac_dir, ac_file)
        file_type = ac_file.split('.')[-1]
        print(ac_file)
        try:
            if file_type == 'cpp' or file_type == 'c':
                variable_info = Snooper.get_cpp_variable_sequence(ac_file_path, test_dir_path)
            elif file_type == 'py':
                variable_info = Snooper.get_py_variable_sequence(ac_file_path, test_dir_path)
        except:
            fail_list.append(ac_file)
        # print(variable_info)
        res_file = os.path.join(res_dir, ac_file.split('.')[0] + '.out')
        util.write_file(res_file, str(variable_info))
        # break
    print(fail_list)
    return fail_list


if __name__ == "__main__":

    # ac_dir = r'C:\Users\ShenJitao\Desktop\cppsnooper\instrumentation\test\AC_c'
    # test_dir_path = r'C:\Users\ShenJitao\Desktop\cppsnooper\instrumentation\test\TEST_DATA_TCG1'
    # res_dir = r'C:\Users\ShenJitao\Desktop\cppsnooper\instrumentation\test\Res_c'
    # get_ac_res(ac_dir, test_dir_path, res_dir)
    # root_path = r'D:\fault_loc\ITSP-data'
    # problem_list = [ 2811, 2812, 2813, 2824, 2825, 2827, 2828, 2830, 2831, 2832, 2833, 2864, 2865, 2866, 2867, 2868, 2869, 2870, 2871]
    # for pro in problem_list:
    #     print(pro)
    #     ac_dir = os.path.join(root_path, str(pro), 'AC_c')
    #     wa_dir = os.path.join(root_path, str(pro), 'WA_c')
    #     test_dir_path = os.path.join(root_path, str(pro), 'TEST_DATA_TCG1')
    #     res_dir = os.path.join(root_path, str(pro), 'Res_c')
    #     get_ac_res(ac_dir, test_dir_path, res_dir)
        # break

    root_path = r'D:\fault_loc\BUCT-data'
    pro_list = ['2174', '3310', '3904', '3905', '3919', '3922', '3924']
    res = {}
    for pro in os.listdir(root_path):
        
        if '.' in pro or pro not in pro_list:
            continue
        print(pro)
        pro_path = os.path.join(root_path, pro)
        C_dir = os.path.join(pro_path, 'AC_c')
        Cpp_dir = os.path.join(pro_path, 'WA_cpp')
        Res_C_dir = os.path.join(pro_path, 'Res_wa_c')
        Res_Cpp_dir = os.path.join(pro_path, 'Res_wa_cpp')
        test_dir_path = os.path.join(pro_path, 'TEST_DATA_TCG1')
        if not os.path.exists(Res_C_dir):
            os.mkdir(Res_C_dir)
        if not os.path.exists(Res_Cpp_dir):
            os.mkdir(Res_Cpp_dir)
        fail_list = fix_style(C_dir)
        res[pro] = fail_list
        # get_ac_res(C_dir, test_dir_path, Res_C_dir)
        # get_ac_res(Cpp_dir, test_dir_path, Res_Cpp_dir)
        break
    print(res)