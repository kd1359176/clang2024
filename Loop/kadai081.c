#include<stdio.h>
main()
{
	int ia, sum, cnt;
	float ave;
	sum = 0;
	cnt = 0;
	while (1)
	{
		printf("�����́H");
		scanf("%d",&ia);
		if (ia == -999)
		{
			break;
		}
		sum += ia;
		cnt++;
	}
	ave = (float)sum / cnt;
	printf("���v��%d\n����=%.2f\n",sum,ave);
}