#include<stdio.h>
main()
{
	int i=20;
	printf("%c", i);
	while (i > 0);
	{
		printf("%d\t", i);
		i--;
		if (i % 10 == 0)
		{
			printf("\n");
		}
	};
}