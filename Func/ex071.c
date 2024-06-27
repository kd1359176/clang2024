#include<stdio.h>

int gokei(int, int, int);
float hekinn(int,int,int);
main()
{
	int a, b, c;
	printf("®”‚ğ‚R‚Â“ü—Í:");
	scanf("%d%d%d", &a,&b,&c);
	printf("‡Œv‚Í%dA•½‹Ï‚Í%.2f\n", gokei(a, b, c),hekinn(a,b,c));
}

int gokei(int a, int b, int c)
{
	return(a+b+c);
}
float hekinn(int a, int b, int c)
{
	return (float)gokei(a,b,c)/3;
}