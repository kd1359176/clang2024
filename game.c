#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int ans, num, cnt;

	srand(time(0));
	rand();
	ans = rand() % 100 + 1;
	printf("数あてゲーム\n");
	printf("1~100までの数を少ない回数で当てるゲーム\n\n");

	cnt = 0;
	while (1) {
		printf("数（1~100）を入力");
		scanf("%d", &num);
		cnt++;

		if (ans > num)
		{
			printf("%dより大きいです\n\n", num);
		}
		else if (ans < num)
		{
			printf("%dより小さいです\n\n", num);
		}
		else {
			printf("当たり!!%d回で当たりました\n", cnt);
			break;
		}
	}
}