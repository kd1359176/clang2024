#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int ans, num, cnt;

	srand(time(0));
	rand();
	ans = rand() % 100 + 1;
	printf("”‚ ‚ÄƒQ[ƒ€\n");
	printf("1~100‚Ü‚Å‚Ì”‚ð­‚È‚¢‰ñ”‚Å“–‚Ä‚éƒQ[ƒ€\n\n");

	cnt = 0;
	while (1) {
		printf("”i1~100j‚ð“ü—Í");
		scanf("%d", &num);
		cnt++;

		if (ans > num)
		{
			printf("%d‚æ‚è‘å‚«‚¢‚Å‚·\n\n", num);
		}
		else if (ans < num)
		{
			printf("%d‚æ‚è¬‚³‚¢‚Å‚·\n\n", num);
		}
		else {
			printf("“–‚½‚è!!%d‰ñ‚Å“–‚½‚è‚Ü‚µ‚½\n", cnt);
			break;
		}
	}
}