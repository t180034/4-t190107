#include <stdio.h>

int main() {
    int i = 1;
    while(1) {
        i=i*2;
        if(i<0) break;
    }
    printf("%d\n", i-1);
}
