#include<stdio.h>
main()
{
	int i, sum;
	sum = 0;
	while (1)
	{
		printf("数を入れて");
		scanf("%d", &i);
		if (i == -999)
		{
			break;//ループを一つ抜ける
		}
		sum += i;
	}
	printf("合計=%d\n", sum);
}