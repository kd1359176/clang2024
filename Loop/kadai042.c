#include<stdio.h>
main()
{
	int i=1,gokei=0;
	while (i <= 300)
	{
		printf("%d+", &i);
		gokei += i;
		i++
	}
		printf("\b=%d\n",gokei);
	}
}