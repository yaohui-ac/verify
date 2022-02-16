# !/bin/bash
g++ -std=c++17 $1
if [ $? -ne 0 ] # 如果上一条指令有问题
then
    echo "shell: error! exited"
    exit
fi    
./a.out
rm a.out
echo "shell: All commands are executed ok"
