#include<stdio.h>
main()
{
	char m;
	printf("�������:");
	scanf("%c",&m);

	if (m == 2)
	{
		printf("�ŏI���͂Q�W���ł�\n:");
	}
	else
	{
		if (m == 4 || m == 6 || m == 9 || m == 11)
		{
			printf("�ŏI����30���ł�\n:");
		}
		else
		{
			printf("�ŏI����31���ł�:\n");
		}
	}
}