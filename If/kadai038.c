#include<stdio.h>
main()
{
	char i;
	printf("1文字入力:");
	scanf("%c", &i);


	if (i >= 'A' && i <= 'Z')
	{
		printf("変換結果は%c", i + 0x20);
	}
	else if (i >= 'a' && i <= 'z')
	{
		printf("変換結果は%c", i - 0x20);
	}
	else 
	{
		printf("入力文字は%c", i);
	}
}