#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i,date[20],target,work;
	for (i = 0; i < 20; i++) {
		date[i] = i + 1;
		printf("date[%d]=%d\n", i, date[i]);
	}
	srand(time(0));
	printf("ƒVƒƒƒbƒtƒ‹Œã\n");
	for (i = 0; i < 20; i++) {
		target=rand() % 20 ;
		work=date[i] ;
		date[i]=date[target];
		date[target]=work;
		printf("date[%d]=%d\n",i,date[i]);
	}
}