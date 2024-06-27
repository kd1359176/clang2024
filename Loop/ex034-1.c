#include<stdio.h>
main()
{
	int i;
	printf("”‚Í?");
	scanf("%d", &i);
	do
	{
		printf("*****\n", i);
		i--;
	} while (i > 0);
}