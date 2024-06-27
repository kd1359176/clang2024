#include<stdio.h>
main()
{
	int i, sum;
	sum = 0;
	while (1)
	{
		printf("”‚ğ“ü‚ê‚Ä");
		scanf("%d", &i);
		if (i == -999)
		{
			break;//ƒ‹[ƒv‚ğˆê‚Â”²‚¯‚é
		}
		sum += i;
	}
	printf("‡Œv=%d\n", sum);
}