#include<stdio.h>
main()
{
	int a, b;
	a = 0, b = 0;
	printf("�Q�̎����l�́H");
	scanf("%d %d", &a, &b);
	if (a < b) {
		printf("�傫���ق���=%d", b);
	}
	if(a>b) {
		printf("�傫���ق���=%d", a);
	}
}