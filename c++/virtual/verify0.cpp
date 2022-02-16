#include<bits/stdc++.h>
using namespace std;
class fa {
    int x;
    public:
    fa() {}
   // virtual void vf() {cout << "fa:vf\n";}
    ~fa() {cout << "~fa\n";}
};
class compoent {
    public:
    ~compoent() {cout << "compnent";}
};
class son : public fa { //不加public 不允许对不可访问的基类 "fa" 进行转换
    compoent c;
    public:
    son() {}
   // virtual void vf() {cout << "son:vf\n";}
    ~son() {cout << "~son\n";}
};
void verify0() {
    fa* pfa = new son();
    delete pfa;
}
int main () {
    verify0();
}