#include<stdio.h>
main()
{
	char data[] = "orange";
	int i;
	i = 0;

	printf("•¶š—ñ:");
	while (data[i] != '\0')
	{
		i++;
	}
	printf("%s",&data[0]);
	
	printf("\n•¶š”‚Í%d•¶š\n",i);
}