#include<stdio.h>
main()
{
	int i,sum,cnt;
	float ave;
	i = 0;
	sum = 0;
	cnt = 0;
	printf("���������(-999�ŏI��)�H");
	scanf("%d",&i);
	do
	{
		sum += i;
		cnt++;
		printf("���́H");
		scanf("%d", &i);
	} while (i != -999);
	ave = (float)sum / cnt;
	printf("���v��%d\n����=%.2f\n", sum, ave);
}