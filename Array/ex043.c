#include<stdio.h>
main()
{
	char data[] = "orange";
	int i;
	i = 0;

	printf("������:");
	while (data[i] != '\0')
	{
		i++;
	}
	printf("%s",&data[0]);
	
	printf("\n��������%d����\n",i);
}