#include <stdio.h>

long fac(int n) { return (n == 0) ? 1 : n * fac(n - 1); }

int main() {
    printf("%ld日後に解散する\n", fac(16));
}
