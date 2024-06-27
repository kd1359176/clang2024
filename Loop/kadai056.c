#include<stdio.h>
main()
{
	char ia;
	printf("アルファベット小文字を入力:");
	scanf("%c", &ia);
	ia = ia + 1;
	for (; ia <= 'z'; ia++)
	{
		printf("%c ", ia);
	}
}