#include<stdio.h>
main()
{
	int a;
	printf("0‚©‚ç‚P‚O‚O‚Ü‚Å‚Ì®”H");
	scanf("%d", &a);
	if (a >= 90) {
		printf("‚»‚Ì”’l‚Ì”»’è‚Í5");
	}
	else if (a>= 80 && a < 90) {
		printf("‚»‚Ì”’l‚Ì”»’è‚Í4");
	}
	else if (a >= 50 && a < 80) {
		printf("‚»‚Ì”’l‚Ì”»’è‚Í3");
	}
	else if (a >= 30 && a < 50) {
		printf("‚»‚Ì”’l‚Ì”»’è‚Í2");
	}
	else {
		printf("‚»‚Ì’l‚Ì”»’è‚Í1");
	}
}