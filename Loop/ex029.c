#include<stdio.h>
main()
{
	
	int a, b;
	printf("数を入れて:");
	scanf("%d", &b);
	a= 0;
	while(a<b)
	{
		printf("*");
		a++;
	}
}