#include <stdio.h>

int main() {
    short a, b, c;
    a = 107;
    b = 65536-a;
    c = a + b;
    printf("a + b は %d です。\n", c);
}