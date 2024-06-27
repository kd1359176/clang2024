#include<stdio.h>
main()
{
	char ia;
	printf("アルファベットを入力");
	scanf("%c", &ia);
	switch (ia)
	{
	case'a':
		printf("America\nAustralia\n");
		break;

	case'e':
		printf("Englang");
		break;

	case'f':
		printf("France");
		break;

	case'j':
		printf("Japan");
		break;
	}
}