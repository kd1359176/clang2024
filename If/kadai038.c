#include<stdio.h>
main()
{
	char i;
	printf("1•¶Žš“ü—Í:");
	scanf("%c", &i);


	if (i >= 'A' && i <= 'Z')
	{
		printf("•ÏŠ·Œ‹‰Ê‚Í%c", i + 0x20);
	}
	else if (i >= 'a' && i <= 'z')
	{
		printf("•ÏŠ·Œ‹‰Ê‚Í%c", i - 0x20);
	}
	else 
	{
		printf("“ü—Í•¶Žš‚Í%c", i);
	}
}