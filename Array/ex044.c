#include<stdio.h>
main()
{
	char moji[80], moji2[90], w[80];
	int i;
	i = 0;
	printf("文字列１を入力:");
	scanf("%s", &moji[0]);

	printf("\n文字列２を入力:");
	scanf("%s",&moji2[0]);
	
	printf("moji1=%s\tmoji2=%s",&moji[0],&moji2[0]);
	printf("入れ替えると\n");
	
	for (i = 0; w[i] = moji[i];i++);
	for (i = 0; moji[i] = moji2[i]; i++);
	for (i = 0; moji2[i] = w[i]; i++);


	printf("moji1=%s\tmoji2=%s\n", &moji[0], &moji2[0]);
}