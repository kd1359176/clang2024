#include<stdio.h>

int gokei(int, int, int);
float hekinn(int,int,int);
main()
{
	int a, b, c;
	printf("�������R����:");
	scanf("%d%d%d", &a,&b,&c);
	printf("���v��%d�A���ς�%.2f\n", gokei(a, b, c),hekinn(a,b,c));
}

int gokei(int a, int b, int c)
{
	return(a+b+c);
}
float hekinn(int a, int b, int c)
{
	return (float)gokei(a,b,c)/3;
}