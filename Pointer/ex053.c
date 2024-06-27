#include<stdio.h>
main()
{
	int a, b;
	int* p_a;
	int* p_b;
	int* w;
	a = 100;
	b = 200;
	p_a = &a;
	p_b = &b;
	printf("Às‘O:*p_a=%d *p_b=%d\n",a,b);
     w=p_a;
     p_a = p_b;
     p_b=w;
     printf("ÀsŒã:*p_a=%d *p_b=%d\n",*p_a,*p_b);
}