#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	char s[21];
	int i,k[20],n;
	i = 0;
	srand(time(0));
	rand();
	printf("文字列を入力");
	scanf("%s",&s[0]);
	for (i = 0; s[i] != '\0'; i++) {
		k[i] = rand() % 6;
		s[i]=s[i]+k[i];
	}
	printf("暗号化文字列=%s\n",&s[0]);
	printf("暗号化キー=");
	for (n = 0; n < i; n++) {
		printf("%d", k[n]);
	}
}