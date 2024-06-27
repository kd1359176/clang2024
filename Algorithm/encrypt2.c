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
	printf("•¶š—ñ‚ğ“ü—Í");
	scanf("%s",&s[0]);
	for (i = 0; s[i] != '\0'; i++) {
		k[i] = rand() % 6;
		s[i]=s[i]+k[i];
	}
	printf("ˆÃ†‰»•¶š—ñ=%s\n",&s[0]);
	printf("ˆÃ†‰»ƒL[=");
	for (n = 0; n < i; n++) {
		printf("%d", k[n]);
	}
}