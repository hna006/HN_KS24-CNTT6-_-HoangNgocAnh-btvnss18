#include <stdio.h>
int main() {
    int x = 42;
    int *p = &x;
    printf("Dia chi cua x: %p\n",&x);
    printf("Gia tri cua x (qua con tro): %d\n",*p);
    return 0;
}