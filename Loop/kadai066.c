#include<stdio.h>
main()
{
	int i = 1,gokei=0;
	printf("%d", i);
		do
		{
			gokei+=i;
			i++;
			printf("+%d",i);
		} while (gokei < 300);
		printf("=%d", gokei+i);
}