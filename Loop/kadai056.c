#include<stdio.h>
main()
{
	char ia;
	printf("�A���t�@�x�b�g�����������:");
	scanf("%c", &ia);
	ia = ia + 1;
	for (; ia <= 'z'; ia++)
	{
		printf("%c ", ia);
	}
}