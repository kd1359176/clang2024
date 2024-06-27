#include<stdio.h>
main()
{
	int i, j,k,gokei=0;
	int a[2][3][3] = { {{3,4,5},{ 4,5,6 }},
					  {{ 2,2,3 }, { 2,5,6 }}};
	for (i = 0; i < 2; i++) {
		printf("\nアパート%d", i + 1);
		for (j = 0; j < 2; j++) {
			printf("(%d階):", j + 1);
			for (k = 0; k < 3; k++) {
				printf("%d", a[i][j][k]);
				gokei += a[i][j][k];
			}
		}
	}
	printf("\n全体で%d人住んでます\n",gokei);
}