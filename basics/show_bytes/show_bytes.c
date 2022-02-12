#include<stdio.h>
#include<string.h>
struct node {
    int a;
    char b;
    float c;
};
typedef unsigned char* byte_pointer;
void show_bytes(byte_pointer p, size_t len) { //打印对象的字节序列
    for(size_t i = 0; i < len; i++) {
        printf(" %.2x", p[i]);
    }
    puts("");
}

int main () {
    int x = 0x12345678;
    const char* str = "abcde";
    struct node nd;
    nd.a = 0x1234;
    nd.b = 'a';
    nd.c = 0x1234;
    show_bytes((byte_pointer)&x, sizeof(int)); //  78 56 34 12
    show_bytes((byte_pointer)str, strlen(str)); // 61 62 63 64 65
    show_bytes((byte_pointer)&nd, sizeof (nd)); // 34 12 00 00 61 41 b2 68 00 a0 91 45
    return 0;
}