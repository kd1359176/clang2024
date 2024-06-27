#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int b;

	srand(time(0));

	b = rand() % 50+10;
	printf("‚³‚¢‚±‚ë‚Í%d‚Å‚·\n", b);
}