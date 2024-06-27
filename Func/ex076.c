#include<stdio.h>
void keisan(int n1, int n2,int *kei,float *hei);
main()
{
	int a, b,k;
	float h;
	printf("®”‚ğ2‚Â“ü—Í:");
	scanf("%d%d",&a,&b);
	keisan(a, b,&k,&h);
	printf("‡Œv‚Í%dA•½‹Ï‚Í%.2f\n",k,h);
}

void keisan(int n1,int n2,int *kei,float *hei)
{
	*kei = n1 + n2;
	*hei = (n1 + n2) / 2.0;
	return;
}