#include<stdio.h>
main()
{
	int a, b;
	a = 0, b = 0;
	printf("２つの実数値は？");
	scanf("%d %d", &a, &b);
	if (a < b) {
		printf("大きいほうは=%d", b);
	}
	if(a>b) {
		printf("大きいほうは=%d", a);
	}
}