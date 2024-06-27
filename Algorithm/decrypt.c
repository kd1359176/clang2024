#include<stdio.h>
main()
{
	char s[80];
	int i;
	i = 0;
	printf("ˆÃ†‰»•¶š—ñ‚ğ“ü—Í");
	scanf("%s",&s[0]);
	while(s[i] != '\0') {
		s[i]--;
		i++;
	}
	printf("•œ†‰»•¶š—ñ=%s\n",&s[0]);
}