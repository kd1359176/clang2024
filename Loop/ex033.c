#include<stdio.h>
main()
{
	int sum, cnt, date;
	float ave;
	sum = 0;
	cnt= 0;
	date= 0;
	printf("数は？");
	scanf("%d", &date);
	for (; date!= -999;) 
	{
		sum += date;
		cnt++;
		printf("数は？");
		scanf("%d", &date);
	}
	ave = (float)sum / cnt;
	printf("合計は%d\n平均は%.2f\n", sum,ave);
}