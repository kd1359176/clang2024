#include<stdio.h>
main()
{
	int i, s;
	int d[11] = { 10,5,30,77,16,3,47,29,37,33,55 };
	printf("探索値を入力");
	scanf("%d", &s);
	d[10] = s;
	i = 0;
	while (s != d[i]) {
		i++;
	}
		
		if (i == 10) {
			printf("入力データ%dは見つかりませんでした\n", s);
		}
		else {
			printf("探索値%dを、d[%d]番目に見つかった\n", s,i);
		}
}