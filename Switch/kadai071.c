#include<stdio.h>
main()
{
	int ia, ib;
	char ic;
	printf("����1�́H");
	scanf("%d", &ia);
	printf("�����Q�́H");
	scanf("%d", &ib);
	printf("���Z�q�́H");
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
		printf("%d/%d=%d���܂�%d", ia, ib, ia / ib, ia % ib);
		break;
	}
}