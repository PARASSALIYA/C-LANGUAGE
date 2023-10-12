#include <stdio.h>

int main()
{
    int n;
    printf("Enter Array of size :");
    scanf("%d", &n);

    int a[n], b[n], c[n], i;
    printf("Array  of A :\n");

    for (i = 0; i < n; i++)
    {
        printf("a[%d] :", i);
        scanf("%d", &a[i]);
    }

    printf("Array B :\n");

    for (i = 0; i < n; i++)
    {
        printf("b[%d] :", i);
        scanf("%d", &b[i]);
    }

    printf("Array C :\n");

    for (i = 0; i < n; i++)
    {
        c[i] = a[i] + b[i];
    }
    for (i = 0; i < n; i++)
        printf("c[%d]:%d\n", i, c[i]);
}
