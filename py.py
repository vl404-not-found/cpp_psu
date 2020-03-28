import os


def func(x):
    if x[:3] == "lab" or x[:3] == "lib":
        return 1
    else:
        return 0

def func_file(x):
    if x[-4:] == ".cpp" or x[-2:] == ".h":
        return 1
    else:
        return 0

dir = os.path.abspath(os.curdir)

# print("jjjjjjjjjjjjoi"[-4:])

l_folder = list(filter(func, os.listdir()))

all = ""

for f in l_folder:
    dir_in = os.path.join(dir, f)
    all += "\nПапка " + f + ":\n"
    folder_f = list(filter(func_file, os.listdir(dir_in)))
    print(dir_in)
    print(folder_f)
    for file in folder_f:
        all += "\nФайл " + file + ":\n"
        f = open(os.path.join(dir_in, file), 'r', encoding='utf-8')
        all += "\n" + f.read() + "\n"
        print(os.path.join(dir_in, file))

f = open('text.cpp', 'w', encoding='utf-8')
f.write(all)
f.close()
