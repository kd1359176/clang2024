#include<stdio.h>
main()
{
	int a;
	printf("0����P�O�O�܂ł̐����H");
	scanf("%d", &a);
	if (a >= 90) {
		printf("���̐��l�̔����5");
	}
	else if (a>= 80 && a < 90) {
		printf("���̐��l�̔����4");
	}
	else if (a >= 50 && a < 80) {
		printf("���̐��l�̔����3");
	}
	else if (a >= 30 && a < 50) {
		printf("���̐��l�̔����2");
	}
	else {
		printf("���̒l�̔����1");
	}
}