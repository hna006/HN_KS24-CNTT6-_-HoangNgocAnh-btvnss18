#include <stdio.h>
void capNhatPhanTu(int *arr, int viTri, int giaTriMoi) {
    arr[viTri] = giaTriMoi;
}
void inMang(int *arr, int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", *(arr + i));
    printf("\n");
}
int main() {
    int a[] = {3, 6, 9, 12, 15};
    int n = sizeof(a) / sizeof(a[0]);
    printf("Mảng ban đầu: ");
    inMang(a, n);
    capNhatPhanTu(a, 1, 100);
    printf("Mảng sau khi cập nhật: ");
    inMang(a, n);
    return 0;
}