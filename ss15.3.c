#include <stdio.h>

int daoNguoc(int n) {
    int reversed = 0;
    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}

int main() {
    int num;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &num);

    printf("So dao nguoc la: %d\n", daoNguoc(num));

    return 0;
}


