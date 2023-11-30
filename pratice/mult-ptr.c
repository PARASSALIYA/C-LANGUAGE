#include <stdio.h>

int main()
{
    int a = 100;

    int *ptr1;
    int **ptr2;
    int ***ptr3;
    int ****ptr4;
    int *****ptr5;

    ptr1 = &a;
    ptr2 = &ptr1;
    ptr3 = &ptr2;
    ptr4 = &ptr3;
    ptr5 = &ptr4;

    ***ptr3 = 1000;
    *****ptr5 = 20;

    printf("A :%d\n", a);
    printf("PTR1 :%d\n", *ptr1);
    printf("PTR2 :%d\n", **ptr2);
    printf("PTR3 :%d\n", ***ptr3);
    printf("PTR4 :%d\n", ****ptr4);
    printf("PTR5 :%d\n", *****ptr5);
}