#include<stdio.h>
main()
{
	int i=1;
	printf("%c", i);
	do
	{
		printf("%d\t",i);
		i++;
		if (i % 11 ==0 )
		{
			printf("\n");
		}
	} while (i <=20);
}