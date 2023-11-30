#include <stdio.h>

int main()
{
    int n, a = 1;
    printf("Enter any number :");
    scanf("%d", &n);
    printf("The sum of all number :");

    for (int i = 1; i <= n; i++)
    {
        a *= i;
    }
    printf("%d", a);
}