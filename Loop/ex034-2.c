#include<stdio.h>
main()
{
	int i,no;
	
	printf("����?");
	scanf("%d", &i);
	do
	{
		no = 1;
		do {
			printf("*");
			no++;
		} while (no <= 5);
		printf("\n");
		i--;
	} while (i > 0);	
}