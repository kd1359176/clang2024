#include<stdio.h>
main()
{
	int a;
	printf("0から１００までの整数？");
	scanf("%d", &a);
	if (a >= 90) {
		printf("その数値の判定は5");
	}
	else if (a>= 80 && a < 90) {
		printf("その数値の判定は4");
	}
	else if (a >= 50 && a < 80) {
		printf("その数値の判定は3");
	}
	else if (a >= 30 && a < 50) {
		printf("その数値の判定は2");
	}
	else {
		printf("その値の判定は1");
	}
}