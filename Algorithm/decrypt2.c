#include<stdio.h>
main()
{
	char s[21];
	int i,k[20];
	i = 0;

	printf("文字列を入力");
	scanf("%s",&s[0]);
	for (i = 0; s[i] != '\0'; i++) {
		printf("s[%d]の復号化キー>", i);
		scanf("%d", &k[i]);
		s[i] = s[i] - k[i];
	}
	printf("復号化文字=%s\n", &s[0]);
}