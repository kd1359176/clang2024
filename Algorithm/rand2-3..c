#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int b;

	srand(time(0));

	b = rand() % 50+10;
	printf("���������%d�ł�\n", b);
}