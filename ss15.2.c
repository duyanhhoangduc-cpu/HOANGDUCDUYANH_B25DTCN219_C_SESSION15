#include <stdio.h>
#include <stdlib.h> 

int tinhTongChuSo(int n) {
    n = abs(n);  
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int so;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &so);

    printf("Tong cac chu so cua %d la: %d\n", so, tinhTongChuSo(so));
    return 0;
}

