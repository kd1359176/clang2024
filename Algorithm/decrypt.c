#include<stdio.h>
main()
{
	char s[80];
	int i;
	i = 0;
	printf("暗号化文字列を入力");
	scanf("%s",&s[0]);
	while(s[i] != '\0') {
		s[i]--;
		i++;
	}
	printf("復号化文字列=%s\n",&s[0]);
}