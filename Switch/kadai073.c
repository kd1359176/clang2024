#include<stdio.h>
main()
{
	int  ia;
	char ib;
	printf("10�i���̐��������:");
	scanf("%d",&ia);
	printf("�A���t�@�x�b�g( o or h or d) ?");
	scanf("%*c%c", &ib);
	switch (ib)
	{
	case'o':
		printf("%o",ia);
		break;
	case'h':
		printf("%x", ia);
		break;
	default: printf("%d",ia);
	}
}