#include<stdio.h>
main()
{
	int i,sum,cnt;
	float ave;
	i = 0;
	sum = 0;
	cnt = 0;
	printf("整数を入力(-999で終了)？");
	scanf("%d",&i);
	do
	{
		sum += i;
		cnt++;
		printf("数は？");
		scanf("%d", &i);
	} while (i != -999);
	ave = (float)sum / cnt;
	printf("合計＝%d\n平均=%.2f\n", sum, ave);
}