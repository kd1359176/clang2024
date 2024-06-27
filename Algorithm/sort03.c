#include<stdio.h>

 #define SIZE 5
main()
{
	int i,j,w;
	char d[SIZE] = { 30,7,25,16,10 };
	printf("ソート前\n");
	for (i = 0; i < SIZE; i++) {
		printf("d[%d]:d[%d]\n", d[i],i);
	}
	for (i = 0; i < SIZE; i++) {
		for (j = i-1; j < SIZE; j--) {
			if (d[j + 1] > d[j]) {//昇順ソート（不等号が逆の時は降順）
				break;
			}
				w = d[j];
				d[j] = d[j+1];
				d[j+1] = w;
		}
	}
	printf("\nソート後\n");
	for (i = 0; i < 5; i++) {
		printf("d[%d]:%d\n", d[i], i);
	}
}