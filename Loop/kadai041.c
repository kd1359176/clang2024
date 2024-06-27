#include<stdio.h>
main()
{
	int sum, cnt, date;
	float ave;
	sum = 0;
	cnt= 0;
	date= 0;
	printf("”‚ÍH");
	scanf("%d", &date);
	while (date!= -999) 
	{
		sum += date;
		cnt++;
		printf("”‚ÍH");
		scanf("%d", &date);
	}
	ave = (float)sum / cnt;
	printf("‡Œv‚Í%d\n•½‹Ï‚Í%.2f\n", sum,ave);
}