#include<stdio.h>
main()
{
	int a;
	printf("整数は？");
	scanf("%d", &a);
	if (a%2==0 ) {
		printf("その数は偶数です\n");
	}
	if (a%2 ==1 ) {
		printf("その数は奇数です\n");
	}
}