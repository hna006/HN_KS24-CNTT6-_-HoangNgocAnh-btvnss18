#include <stdio.h>
int timKiem(int *arr, int n, int giaTri) {
    for (int i = 0; i < n; i++) {
        if (*(arr + i) == giaTri)
            return i;
    }
    return -1;
}

int main() {
    int a[] = {1, 2, 4, 5, 6, 7};
    int n = sizeof(a) / sizeof(a[0]);
    int giaTriCanTim = 7;
    int viTri = timKiem(a, n, giaTriCanTim);
    if (viTri != -1)
        printf("Phần tử %d nằm ở vị trí %d\n", giaTriCanTim, viTri);
    else
        printf("Không tìm thấy phần tử %d trong mảng\n", giaTriCanTim);
    return 0;
}