#include<stdio.h>
main()
{
	char g;
	printf("g%c\n", g);
	printf("���������:");
	scanf("%c", &g);

	if (g >= 'A' && g <= 'Z'||g>='a'&&g<='z')
	{
		printf("�A���t�@�x�b�g�ł�\n:");
	}
	else
	{
		if (g >= '0' && g <= '9')
		{
			printf("�����ł�\n:");
		}
		else
		{
			printf("���̑��̕����ł�\n:");
		}
	}
}