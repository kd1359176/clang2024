#include<stdio.h>
main()
{
	char a;
	printf("���������");
	scanf("%c", &a);
	a>=10&&a<=49;
	switch (a) {
	case'1':printf("10�_��ł�\n");
		break;
	case'2':printf("20�_��ł�\n");
		break;
	case'3':printf("30�_��ł�\n");
		break;
	case'4':printf("40�_��ł�\n");
		break;
	default:printf("�G���[\n");
	}
}