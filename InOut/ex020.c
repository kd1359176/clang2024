#include<stdio.h>
main()
{
	char q;
	printf("小文字を入力");
	scanf("%c", &q);
	printf("大文字に変換して:%c\n", q-0x20);
}