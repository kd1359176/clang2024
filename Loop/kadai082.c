#include<stdio.h>
main()
{
	int ia,ib, sum, cnt;
	float ave;
	sum = 0;
	cnt = 0;
	while (1)
	{
		printf("®”‚ÍH");
		scanf("%d",&ia);
			if (ia == -999)
			{
				break;
			}
		if(ia<0)
		{
			continue;
		}
		sum += ia;
		cnt++;
	}
	ave = (float)sum / cnt;
	printf("‡Œv%d\n•½‹Ï=%.2f\n",sum,ave);
}