#include<stdio.h>
main()
{
	int i, a[10], c[10];
	for (i = 0; i < 10; i++) {
		a[i] = (i + 1) * 10;
	}
	for (i = 0; i < 10; i++) {
		c[i] = a[i];
	}
	printf("配列aから配列cにコピー\n配列a=  ");
	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	printf("\n配列c=  ");
	for (i = 0; i < 10; i++) {
		printf("%d ", c[i]);
	}
}