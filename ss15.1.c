#include <stdio.h>
#include <stdlib.h>

int tinhhieu (int a, int b) {
	return abs(a-b);
}
int tinhtich (int a, int b) {
	return a * b; 
}
int main () {
	int m, a;
	printf("nhap 2 so nguyen : ");
	scanf("%d %d", &m, &a);
	printf("\nchenh lech giua 2 so là: %d ", tinhhieu(m, a));
	printf("\ntich cua 2 so la : %d", tinhtich(m, a));
	
	return 0;  
	 
	
} 
