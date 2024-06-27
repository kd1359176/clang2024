#include<stdio.h>
main()
{
	char data[15] = "Language";
	int i,cnt=1;
	char* p_data;
	p_data = data;
	printf("data[]=%s\n",data);
	printf("ŒŸõ•¶š‚ÍH\n");
    scanf("%d", cnt);
	while (*p_data!='\0')
	{
		if (cnt == *p_data) {
			printf("ŒŸõŒ‹‰Ê‚ÍA%d•¶š–Ú‚Å‚·",cnt);
		}
		p_data++;
		cnt++;
	}
	

}