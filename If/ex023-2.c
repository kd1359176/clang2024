#include<stdio.h>
main()
{
	int year;

	printf("西暦を入力:");
	scanf("%d", &year);
	if (year%4==0)
	{//マイナスは入力されないものとする
			printf("うるう年です\n", year);
	}
	else
	{
		printf("平年です\n");
	}	
}