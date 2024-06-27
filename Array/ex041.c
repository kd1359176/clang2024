#include<stdio.h>
main()
{
	float sum=0, box[3];
	int a;

	for (a = 0; a < 3; a++) {
		printf("ŽÀ”‚ð“ü—Í:");
		scanf("%f", &box[a]);
		sum += box[a];
	}
	printf("‡Œv:%.2f\n•½‹Ï:%.2f\n", sum, sum / 3);
}