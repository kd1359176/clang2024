#include<stdio.h>
main()
{
	int i, sum;
	sum = 0;
	while (1)
	{
		printf("��������");
		scanf("%d", &i);
		if (i == -999)
		{
			break;//���[�v���������
		}
		sum += i;
	}
	printf("���v=%d\n", sum);
}