#include<stdio.h>
main()
{
	//”z—ñ‚Ì‰Šú‰»
	int a, b[5], c[3] = { 30,60,90 };
	for (a = 0; a < 5; a++) {
		b[a] = (a + 1) * 10;
	}
	for (a = 0; a <= 4; a++) {
		printf("b[%d]=%d\n", a, b[a]);
	}
	for (a = 0; a < 3; a++) {
		printf("c[%d]=%d\n", a, b[a]);
	}
}