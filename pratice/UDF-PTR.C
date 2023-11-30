#include <stdio.h>

int sum(int *a, int *b)
{
    return *a + *b;
}

int main()
{
    int x, y;
    printf("Enter X :");
    scanf("%d", &x);
    printf("Enter Y :");
    scanf("%d", &y);
    int ans = sum(&x, &y);

    printf("Sum of %d and %d = %d\n", x, y, ans);
    return 0;
}