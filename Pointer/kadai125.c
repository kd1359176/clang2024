#include<stdio.h>
main()
{
    int data[10] = { 10, 20, 30, 40, 50, 60, 70, 80,-999 };
    int* p_d;
    int i;
    p_d = data;
    printf("�|�C���^���Œ�ŕ\��\n�z��data[]=");
    for (i = 0;*(p_d+i)!=-999; i++) {
        printf("%d", *(p_d + i));
    }
    printf("\n�|�C���^��ω������ĕ\��\n�z��data[]=");
    for (p_d = data; *(p_d) != -999; p_d++); {
        printf("%d", *p_d);
    }
}