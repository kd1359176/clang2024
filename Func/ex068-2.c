#include<stdio.h>
main()
{
	char str[256];

	while (gets(str) != NULL) {
		puts(str);//()の中の文字列をそのまま出力
		          //改行部分(str)を表示に追加する
	}
}