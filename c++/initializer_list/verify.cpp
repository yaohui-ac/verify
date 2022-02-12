#include<iostream>
#include<initializer_list>
using namespace std;

class foo { //验证init_list调用的优先级
public:
    int a;
    int b;
    int c;
    foo(){ cout << "func(empty)\n"; }
    foo(int x1) { cout << "func = foo(x1)\n";}
    foo(int x1, int x2) { cout << "func = foo(x1, x2)\n"; }
    foo(int x1, int x2, int x3) { cout << "func = foo(x1, x2, x3)\n"; }
    foo(initializer_list<int> it) { cout << "func = foo(init_list)\n"; }
};
template<typename T>
void printlist(initializer_list<T> inlist) {
   for(auto e : inlist)
        cout << e << " "; //initlist不支持[]
    puts("");    
}
void verify0() {
    //验证initlist的使用优先级
    foo a;
    foo b = {};
    foo c(1,2);
    foo d{1,2};
    foo e = {1,2};
    /*
    func(empty)
    func(empty)
    func = foo(x1, x2)
    func = foo(init_list)
    func = foo(init_list)
    */
}
void verify1() {
    //验证initlist的深浅拷贝问题
   initializer_list<int>i1{1,2,3};
   printlist(i1);
   initializer_list<int>i2 (i1);
   //for(auto&e : i2)e++; //这一行代码会报错 read-only
   printlist(i1);
   printlist(i2);

   //initlist的引用只读,无法进行修改
   //initlist不支持 []重载
   //initlist的源码
}
int main () {
   verify0(); 
   verify1();     
}