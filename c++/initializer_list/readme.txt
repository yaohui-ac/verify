--验证initializer_list的使用和一些问题

---verify.cpp 对initializer_list的使用和优先级

---find_initlist.sh 去扒了标准库的源码

----有意思的是, initlist内部有:
    The compiler can call a private constructor.(什么意思??????)
    以及 constexpr,noexcept 等学了c++11新特性再来回顾

    initlist内部定义的是指针和边界值，因此拷贝应该没有太大消耗
    源数据具体放到了哪里,估计是编译器做的事,课程上说有一个维护的array与其对应


