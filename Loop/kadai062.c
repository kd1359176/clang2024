#include<stdio.h>
main()
{
	int i=20;
	printf("%c", i);
	do
	{
		printf("%d\t",i);
		i--;
		if (i % 10 ==0 )
		{
			printf("\n");
		}
	} while (i>0);
}