#include<stdio.h>
main()
{
	char i;
	printf("整数は？");
	scanf("%c", &i);
	if (i < 0) {
		printf("入力値はマイナスです\n");
	}
}