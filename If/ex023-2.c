#include<stdio.h>
main()
{
	int year;

	printf("��������:");
	scanf("%d", &year);
	if (year%4==0)
	{//�}�C�i�X�͓��͂���Ȃ����̂Ƃ���
			printf("���邤�N�ł�\n", year);
	}
	else
	{
		printf("���N�ł�\n");
	}	
}