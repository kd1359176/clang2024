#include<stdio.h>

void kazu(int n1, int n2, int n3, int* max, int* min);
main()
{
	int a, b, c, max, min;
	printf("®”‚ð‚R‚Â“ü—Í:");
	scanf("%d%d%d", &a, &b, &c);
	kazu(a, b, c, &max, &min);
	printf("Å‘å’l=%d Å¬’l=%d", max, min);
}

void  kazu(int n1, int n2, int n3, int* max, int* min)
{
	*max = n1;
	if (n2 > *max) {
		*max = n2;
		if (n3 > *max) {
			*max = n3;
		}
		
		
	}
	 *min = n1;
		if (n2 < *max) {
			*min = n2;
			if (n3 < *min) {
				*min = n3;
			}
		}
		return;
}