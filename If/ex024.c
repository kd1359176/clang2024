#include<stdio.h>
main()
{
	char g;
	g = 1;
	printf("g%c\n", g);
	printf("���������:");
	scanf("%c", &g);

	if (g>='A'&&g<='Z')
	{
		printf("�啶���ł�\n:");
	}
	else
		{
			printf("���̑��̕����ł�\n:");
		}
}