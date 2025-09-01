#include <stdio.h>

int main()
{
	// <data type> <nama variable>; ->kalo nggak mau assign value
	// <data type> <nama variable> = <value>; klalo mau assgin "default" value
	int a, b;
	float phi = 3.14;
	
	//assign value a dan b
	a = 30;
	b = 15;
	
	printf ("penjumlah dari a dan b adalah: %d\n", a+b);
	printf ("pengurangan dari a dan b adalah: %d\n", a-b);
	printf ("perkalian dari a dan b adalah: %d\n", a*b);
	printf ("pemabagian dari a dan b adalah: %d\n", a/b);
	printf ("angka Phi adalah: %f", phi);
	printf ("\n");
	return 0;
}
