#include<stdio.h>
main()
{
	char data[15] = "Language";
	int i,cnt=1;
	char* p_data;
	p_data = data;
	printf("data[]=%s\n",data);
	printf("検索文字は？\n");
    scanf("%d", cnt);
	while (*p_data!='\0')
	{
		if (cnt == *p_data) {
			printf("検索結果は、%d文字目です",cnt);
		}
		p_data++;
		cnt++;
	}
	

}