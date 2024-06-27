#include<stdio.h>
main()
{
	int i=1;
	printf("%c", i);
	while(i <=20);
	{
		printf("%d\t", i);
		i++;
		if (i % 11 == 0)
		{
			printf("\n");
		}
	}
}