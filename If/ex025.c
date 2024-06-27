#include<stdio.h>
main()
{
	char g;
	printf("g%c\n", g);
	printf("文字を入力:");
	scanf("%c", &g);

	if (g >= 'A' && g <= 'Z'||g>='a'&&g<='z')
	{
		printf("アルファベットです\n:");
	}
	else
	{
		if (g >= '0' && g <= '9')
		{
			printf("数字です\n:");
		}
		else
		{
			printf("その他の文字です\n:");
		}
	}
}