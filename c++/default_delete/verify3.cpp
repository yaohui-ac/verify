#include<bits/stdc++.h>
using namespace std;
class fa {
public:
    fa()=default;
    fa(fa&)=delete;
    fa& operator=(fa&)=delete;
    void f1()=delete;
    virtual void f2()=delete;

    virtual void f3()=0;
    virtual void f3()=delete;
};

class son : fa {
public:
    son()=default;
    son(son&)=default;
    void f1(){cout << "hhhc\n";}
    //virtual void f2() {cout << "virtual f2\n";}//未删除的函数重写已删除的 函数
    //virtual void f3() {cout << "virtual f3\n";} //可以重写,但本质是虚类
   
};
void verify0() {
    //son s1;
    //无法引用 "son" 的默认构造函数 -- 它是已删除的函数
    //son s1;
    // son s2(s1);
    // s1.f1();   
}
int main () {
    verify0();
}