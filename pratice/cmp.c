#include<stdio.h>

int main()
{
    char n[10];
    char n1[10];

    printf("Enter any string :");
    scanf("%s", &n);
    printf("Enter any string :");
    scanf("%s", &n1);
    int cmp = strcmp(n, n1);
    (cmp == 0)
        ? printf("compare successful.")
        : printf("compare not successful.");
}
