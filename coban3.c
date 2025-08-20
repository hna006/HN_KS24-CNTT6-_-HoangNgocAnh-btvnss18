#include <stdio.h>
void swap(int a,int b, int *result) {
    *result=a+b;
}
int main() {
    int a=10;
    int b=15;
    int sum;
    swap(a,b,&sum);
    printf("tong hai so là:", sum);
    return 0;
}