#include<stdio.h>
main()
{
	char s[21];
	int i,k[20];
	i = 0;

	printf("•¶š—ñ‚ğ“ü—Í");
	scanf("%s",&s[0]);
	for (i = 0; s[i] != '\0'; i++) {
		printf("s[%d]‚Ì•œ†‰»ƒL[>", i);
		scanf("%d", &k[i]);
		s[i] = s[i] - k[i];
	}
	printf("•œ†‰»•¶š=%s\n", &s[0]);
}