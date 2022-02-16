#include<bits/stdc++.h>
#include<functional>
using namespace std;
void verify0() {
    puts("verify0");
    string a = "hello";
    string b = "world";
    a + b = "hello c++";
    //可以通过编译,运行也没有问题
}

int returnRvalue() {
    int x = 2;
    return x;
}
void verify1() {
    //编译器返回右值
   // int * px = &returnRvalue(); //表达式必须为左值或函数指示符
   // int& x = returnRvalue(); //非常量引用的初始值必须为左值
}
void verify2() {
    int&& rx = returnRvalue();
    rx = 3;
    cout << rx << "\n";
    cout << &rx << "\n"; //对右值取地址
}
void verify3() {
    auto&& x = std::move(2);
}

int main () {
    cout << __cplusplus << "\n";
    verify0();
    verify2();
}