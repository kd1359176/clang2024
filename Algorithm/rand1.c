#include<stdio.h>
#include<stdlib.h>//乱数を使うときに必要です
#include<time.h>//乱数を使うときに必要です

main()
{
	int kazu;

	srand(time(0));//乱数の初期化（シャッフル）する
	kazu = rand();//０～３２７６７の範囲で乱数を求める
	printf("発生した乱数は%dです\n", kazu);
}