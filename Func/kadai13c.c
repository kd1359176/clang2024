#include<stdio.h>

void chang(int *a,int *b);
main()
{
	int a, b;
	a = 10;
	b = 20;
	printf("�֐����s�O�̒l:\n");
	printf("a=%d b=%d\n", a, b);

	chang(&a,&b);

	printf("�֐����s��̒l:\n");
	printf("a=%d b=%d\n", a, b);
}

void chang(int* a,int* b)
{
	int w;
	w = *a;
	*a = *b;
	*b = w;
	return;
}