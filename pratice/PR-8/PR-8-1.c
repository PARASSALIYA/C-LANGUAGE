#include <stdio.h>
int main()
{
    int n, a;
    printf("Enter your string :");
    scanf("%[^\n]", &n);

    a = strlen(n);
    printf("string length :%d", a);
}