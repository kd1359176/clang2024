#include<stdio.h>
main()
{
	int  ia;
	char ib;
	printf("10進数の整数を入力:");
	scanf("%d",&ia);
	printf("アルファベット( o or h or d) ?");
	scanf("%*c%c", &ib);
	switch (ib)
	{
	case'o':
		printf("%o",ia);
		break;
	case'h':
		printf("%x", ia);
		break;
	default: printf("%d",ia);
	}
}