#include<stdio.h>
main()
{
	int  a,b;
	a= 0;
	printf("数を入れて");
	scanf("%d", &b);

	while (a <= 10)
	{
		printf("%d+%d=%d\n",a,b,a+b);
		a++;
	}


}