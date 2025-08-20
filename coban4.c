#include <stdio.h>
void inMang(int *arr, int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", *(arr + i));
    printf("\n");
}
int main() {
    int a[] = {5, 10, 15, 20, 25};
    int n = sizeof(a) / sizeof(a[0]);
    inMang(a, n);
    return 0;
}