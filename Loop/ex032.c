#include<stdio.h>
main()
{
	int su, i;
	su = 0;
	i = 1;
	printf("数を入れて");
	scanf("%d", &su, &i);
	for (i = 1; i <= 5; i++)
	{
		printf("%d\n",su*i);
	}
}