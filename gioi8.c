#include <stdio.h>
#include <string.h>
int main() {
    char inputString[100], reverseString[100];
    printf("Nhap chuoi: ");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strcspn(inputString, "\n")] = 0;

    int len = strlen(inputString);
    char *p = inputString + len - 1;
    char *q = reverseString;
    while (p >= inputString) {
        *q = *p;
        p--;
        q++;
    }
    *q = '\0';
    printf("Chuoi goc: %s\n", inputString);
    printf("Chuoi dao nguoc: %s\n", reverseString);
    return 0;
}