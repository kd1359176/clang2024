#include<stdio.h>
main()
{
	float sum=0, box[3];
	int a;

	for (a = 0; a < 3; a++) {
		printf("実数を入力:");
		scanf("%f", &box[a]);
		sum += box[a];
	}
	printf("合計:%.2f\n平均:%.2f\n", sum, sum / 3);
}