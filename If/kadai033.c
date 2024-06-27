#include<stdio.h>
main()
{
	char i;
	printf("アルファベットは？");
	scanf("%c", &i);
	if (i >= 'a' && i <= 'z') {
		printf("その文字は小文字です\n");
	}
	if (i >= 'A' && i <= 'Z') {
		printf("その文字は大文字です\n");
	}
}