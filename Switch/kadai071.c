#include<stdio.h>
main()
{
	int ia, ib;
	char ic;
	printf("整数1は？");
	scanf("%d", &ia);
	printf("整数２は？");
	scanf("%d", &ib);
	printf("演算子は？");
	scanf("%*c%c", &ic);
	switch (ic) {
	case'+':
		printf("%d+%d=%d", ia, ib, ia + ib);
		break;
	case'-':
		printf("%d-%d=%d", ia, ib, ia - ib);
		break;
	case'*':
		printf("%d*%d=%d", ia, ib, ia * ib);
		break;
	case'/':
		printf("%d/%d=%dあまり%d", ia, ib, ia / ib, ia % ib);
		break;
	}
}