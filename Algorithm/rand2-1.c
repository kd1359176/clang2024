#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int a;

	srand(time(0));

	a = rand() % 99;
	printf("‚³‚¢‚±‚ë‚Í%d‚Å‚·\n", a);
}