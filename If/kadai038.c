#include<stdio.h>
main()
{
	char i;
	printf("1��������:");
	scanf("%c", &i);


	if (i >= 'A' && i <= 'Z')
	{
		printf("�ϊ����ʂ�%c", i + 0x20);
	}
	else if (i >= 'a' && i <= 'z')
	{
		printf("�ϊ����ʂ�%c", i - 0x20);
	}
	else 
	{
		printf("���͕�����%c", i);
	}
}