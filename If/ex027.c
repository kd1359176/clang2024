#include<stdio.h>
main()
{
	char i;
	printf("文字を入力:");
	scanf("% c", &i);

	if (i >= 'A' && i <= 'Z')
	{
		printf("変換すると%c", i + 0x20);
	}
	else
	{
		if (i >= 'A' && i <= 'Z')
		{
			printf("変換すると%c", i - 0x20);
		}
		else
		{
			printf("エラーです");
		}
	}
}