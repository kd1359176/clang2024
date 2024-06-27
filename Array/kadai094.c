#include<stdio.h>
main()
{
	int i,j,k,l;
	int a[10] = { 10,20,30,40,50,60,70,80,90 ,100};
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int c[10];
	c = a;
	a = b;
	b = c;
	for (i = 0; i < 10; i++)
	{
		printf("%d", a[j]);
	}
	for (j = 0; j < 10; j++)
	{
		printf("%d", b[j]);
	}
}