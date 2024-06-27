#include<stdio.h>
main()
{
	FILE* fp;
	char str[256],equip[100];
	int i,Lv,hp;
	fp = fopen("file02.txt", "r");
	for (i = 0; i < 3; i++)
	{
		fscanf(fp, "%s\n",str);
		printf("%d:%s\n", i, str);
	 }
	fscanf(fp, "%d%d%s", &Lv, &hp,&equip[i]);
	fclose(fp);
}