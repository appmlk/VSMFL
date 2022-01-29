# -*- coding: utf-8 -*-
import ast
import pycparser
import os
import shutil
import chardet

temp_cpp_src_file = os.path.join('log', 'temp.cpp')


class CodeVisitor(ast.NodeVisitor):
 
    variable_list = []

    def generic_visit(self, node):
        # print(type(node).__name__)
        ast.NodeVisitor.generic_visit(self, node)
    def visit_Name(self, node): 
        """
        这里有个问题，万一这个Name是函数调用里的Name怎么办？
        """
        # print(node.id)
        try:
            self.variable_list.index(node.id)
        except:
            self.variable_list.append(node.id)
        # ast.NodeVisitor.generic_visit(self, node)
    def visit_Call(self, node):
        pass
    

def get_py_variable_name_list(file_path):
    
    with open(file_path, 'r') as f:
        text = f.read()
    r_node = ast.parse(text)
    # print(ast.dump(r_node))
    visitor = CodeVisitor()
    visitor.visit(r_node)
    # print(visitor.variable_list)
    return visitor.variable_list

def get_cpp_variable_name_list(file_path):

    # if not os.path.exists('log\\'):
    #     os.makedirs('log')
    # if sys.platform == "linux":
    #     file_short_path = 'log/' + file_path.split('/')[-1] + '/'
    # else:
    #     file_short_path = 'log/' + file_path.split('\\')[-1] + '/'
    shutil.copy(file_path, temp_cpp_src_file)
     
    with open(file_path, "rb") as f:
        data = f.read() 
        result = chardet.detect(data) # 检测文件内容
    with open(temp_cpp_src_file, 'r+', encoding=result['encoding']) as f:
        lines = f.readlines()
        for i in range(len(lines)):
            line = lines[i]
            if line[0] == '#' or line[0:15] == 'using namespace':
                lines[i] = ''
        f.seek(0)
        f.truncate()
        f.writelines(lines)

    variable_list = []
    ast = pycparser.parse_file(temp_cpp_src_file, use_cpp=True)
    flag = False
    with open(os.path.join('log', 'ast.log'), 'w+') as f:
        ast.show(buf = f)
        f.seek(0)
        lines = f.readlines()
    for i in range(len(lines)):
        if flag == True:
            flag = False
            continue
        line = lines[i].replace(' ', '').split(':')
        if line[0] == 'FuncDef': # 如果函数名也算变量名，就把这if块去掉
            flag = True
            continue
        if line[0] == 'Decl':
            variable_name = line[1].split(',')[0]
            try:
                variable_list.index(variable_name)
            except:
                variable_list.append(variable_name)
    return variable_list

if __name__ == "__main__":
    
    # file_path = r'..\TCG\data\3899\WA_py\498232.py'
    file_path = r'..\oj数据集\data_cpp\1933\WA\2134.cpp'
    # print(get_variable_name_list(file_path))
    print(get_cpp_variable_name_list(file_path))