#include<stdio.h>

 #define SIZE 5
main()
{
	int i,j,w;
	char d[SIZE] = { 30,7,25,16,10 };
	printf("�\�[�g�O\n");
	for (i = 0; i < SIZE; i++) {
		printf("d[%d]:d[%d]\n", d[i],i);
	}
	for (i = 0; i < SIZE; i++) {
		for (j = i-1; j < SIZE; j--) {
			if (d[j + 1] > d[j]) {//�����\�[�g�i�s�������t�̎��͍~���j
				break;
			}
				w = d[j];
				d[j] = d[j+1];
				d[j+1] = w;
		}
	}
	printf("\n�\�[�g��\n");
	for (i = 0; i < 5; i++) {
		printf("d[%d]:%d\n", d[i], i);
	}
}