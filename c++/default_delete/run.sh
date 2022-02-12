# !/bin/bash
g++ $1
if [ $? -ne 0 ] # 上一条指令有问题
then
    echo "shell: error! exited"
    exit
fi    
./a.out
rm a.out
echo "shell: All commands are executed ok"
