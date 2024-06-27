#include<stdio.h>

void str_cht(char* p,char* q);

main()
{
	char a[256], b[256];
	printf("配列 a :\n");
	gets(a);
	printf("配列　b :\n");
	gets(b);
	str_cht(a,b);
	printf("配列 a :%s\n",a);
}

void str_cht(char* p, char* q)
{
	int i, j;

	for (i = 0; *(p + i) != '\0'; i++);
	for (j = 0; *(p + j) = *(q + j); i++, j++);
}