#include <stdio.h>

int main() {
	int length, width, area;
	printf("Hitung luas persegi panjang berdasarkan input\n");
	printf("masukan panjang = ");
	scanf("%d", &length);
	printf("masukan lebar = ");
	scanf("%d", &width);
	area = length*width;
	printf("luas=%d\n", area);
	return 0;
	
}

