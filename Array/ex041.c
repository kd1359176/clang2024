#include<stdio.h>
main()
{
	float sum=0, box[3];
	int a;

	for (a = 0; a < 3; a++) {
		printf("���������:");
		scanf("%f", &box[a]);
		sum += box[a];
	}
	printf("���v:%.2f\n����:%.2f\n", sum, sum / 3);
}