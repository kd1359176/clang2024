#include<stdio.h>
main()
{
	char g;
	g = 1;
	printf("g%c\n", g);
	printf("文字を入力:");
	scanf("%c", &g);

	if (g>='A'&&g<='Z')
	{
		printf("大文字です\n:");
	}
	else
		{
			printf("その他の文字です\n:");
		}
}