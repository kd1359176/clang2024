#include<stdio.h>
main()
{
	int sum, cnt, date;
	float ave;
	sum = 0;
	cnt= 0;
	date= 0;
	printf("���́H");
	scanf("%d", &date);
	while (date!= -999) 
	{
		sum += date;
		cnt++;
		printf("���́H");
		scanf("%d", &date);
	}
	ave = (float)sum / cnt;
	printf("���v��%d\n���ς�%.2f\n", sum,ave);
}