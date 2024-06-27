#include<stdio.h>
main()
{
	int a=5, b=3;
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a=%d b=%d\n", a, b);
}