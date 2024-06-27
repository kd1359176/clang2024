#include<stdio.h>

#define N 5
main()
{
	int d[N] = { 30,7,25,16,10 };
	int i, j, w;
	printf("ソート前:\n");
	for (i = 0; i < N; i++) {
		printf("d[%d]:%d\n",d[i],i);
	}
	for (i = N - 1; i > 0; i--){
		printf("ソート範囲:d[0]~d[i]");
		for (j = 0; j < i; j++) {
			printf("d[%d]:%1とd[%d]:%2dの比較\n", j, d[j], j + 1, d[j + 1]);
			if (d[j] > d[j + 1]) {
				w = d[j];
				d[j] = d[j + 1];
				d[j + 1] = w;
			}
		}
	}
	printf("ソート後:\n");
	for (i = 0; i<N;i++) {
		printf("d[%d]:%d\n", i, d[i]);
	}
}