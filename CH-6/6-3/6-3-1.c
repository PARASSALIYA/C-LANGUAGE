#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter any number :");
    scanf("%d", &n);
    printf("The sum of all number :");

    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    printf("%d", sum);
}