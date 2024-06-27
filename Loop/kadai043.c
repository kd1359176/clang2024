#include<stdio.h>
main()
{
	int i;
	printf("文字コード（－１で入力終了）は？");
	scanf("%d", &i);
	while (i != -1) 
	{
		printf("%c\n", i);
		printf("文字コード（－１で入力終了）は？");
		scanf("%d",&i);
	}
}