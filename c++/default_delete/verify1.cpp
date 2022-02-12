#include<bits/stdc++.h>
using namespace std;
class cs {
public:
    cs() = default;
    cs(int x) = delete;
    void work() = delete;
    void run() {cout << "run\n";}
    ~cs() = delete;
};
void verify0() {
   // cs c1;
   //哪怕不调用, 编译也无法通过
}
void verify1() {
    cs* c1 = new cs();
}
void verify2() {
    //cs* c1 = new cs();
    //delete c1;
    //不调用,编译也无法通过
}
void verify3() {
    cs* c1 = new cs();
    c1->run();
    //c1->work();//无法通过编译
}
int main () {
    verify1();
    return 0;
}