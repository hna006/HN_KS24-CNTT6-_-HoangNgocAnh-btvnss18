#include <stdio.h>
void sapXep(int *a, int n) {
    for (int i = 0; i < n-1; i++)
        for (int j = 0; j < n-i-1; j++)
            if (a[j] > a[j+1]) {
                int t = a[j]; a[j] = a[j+1]; a[j+1] = t;
            }
}
int main() {
    int a[] = {9, 3, 7, 1, 5, 2}, n = sizeof(a)/sizeof(a[0]);
    sapXep(a, n);
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}