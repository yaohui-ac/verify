#include<bits/stdc++.h>
using namespace std;
class nocopy { 
    //不可拷贝
public:
    int c;
    nocopy()=default;
    nocopy(nocopy&other)=delete;
    nocopy& operator= (nocopy&other)=delete;

};

void verify0() {
    nocopy n1;
    n1.c = 3;
    //  auto n2 = n1;//无法通过编译
    auto&n3 = n1;
}
//   ----- 私有拷贝
class private_copy;
using pcopy = private_copy;
class myfriend;
class private_copy {
private:
    int ele;
    private_copy(private_copy&other)=default;
    pcopy& operator= (pcopy&other)=default;
public:
    private_copy() = default;
    friend class myfriend; // 友元
};
class myfriend {
    public:
    void run(pcopy p) { 
        //传值会拷贝,此时会出错否(是否在myfriend的作用域下)
        cout << "myfriend run ";
        cout << p.ele << "\n";
    }
    void work(pcopy& p) {
        pcopy mycopy = p;
        cout << "myfriend work ";
        cout << mycopy.ele << "\n";
    }
};
void verify1() {
    myfriend m;
    pcopy p;
    m.work(p);
    //m.run(p); //这一行会报错
}
void verify2() {
    pcopy p1;
    //p2 = p1; //不可
}
int main () {

}
   