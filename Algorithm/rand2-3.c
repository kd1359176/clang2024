#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int c;

	srand(time(0));

	c = rand() % 200-100+1;
	printf("‚³‚¢‚±‚ë‚Í%d‚Å‚·\n", c);
}