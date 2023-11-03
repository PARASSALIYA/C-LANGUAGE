#include<stdio.h>

int main()
{
    char n[5];
    char n1[10];

    printf("Enter any string :");
    scanf("%s", &n);
    printf("Enter any string :");
    scanf("%s", &n1);
    int cmp = strcmp(n, n1);
    (cmp == 0)
        ? printf(" compare : %s", n1)
        : printf("not compare :%s", n1);
}
