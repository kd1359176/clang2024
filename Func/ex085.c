#include<stdio.h>

void str_cht(char* p,char* q);

main()
{
	char a[256], b[256];
	printf("�z�� a :\n");
	gets(a);
	printf("�z��@b :\n");
	gets(b);
	str_cht(a,b);
	printf("�z�� a :%s\n",a);
}

void str_cht(char* p, char* q)
{
	int i, j;

	for (i = 0; *(p + i) != '\0'; i++);
	for (j = 0; *(p + j) = *(q + j); i++, j++);
}