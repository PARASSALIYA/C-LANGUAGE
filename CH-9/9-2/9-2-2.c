#include <stdio.h>

int main()
{
    char a[10] = "admin@gmail.com";
    char b[10] = "123456";
    char a1[10] = "0", b1[10] = "0";
    printf("Enter your email :");
    scanf("%s", &a1);
    printf("Enter your password :");
    scanf("%s", &b1);
    int i;
        if (a[i] == a1[i] && b[i] == b1[i])
        {
            printf("login successful.....\n");
        }
        else
        {
            printf("login failed.invalid credentials\n");
        }
}
