#include<stdio.h>
main()
{
	
	int a, b;
	printf("数を入れて:");
	scanf("%d", &b);
	a=b;
	while(a>0)
	{
		printf("*");
		a--;
	}
}