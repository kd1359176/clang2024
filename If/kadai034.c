#include<stdio.h>
main()
{
	char i;
	printf("１文字入力は？");
	scanf("%c", &i);
	if (i >= 'a' && i <= 'z') {
		printf("アルファベットです\n");
	}
	else {
		printf("ERROR");
	}
}