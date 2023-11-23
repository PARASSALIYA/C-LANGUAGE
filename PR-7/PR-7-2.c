#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mult(int a, int b)
{
    return a * b;
}

int div(int a, int b)
{
    return a / b;
}

int mod(int a, int b)
{
    return a % b;
}
void cinput()
{
    int c;
    printf("Enter your choice :");
    scanf("%d", &c);
}

void choiceinput()
{
    printf("press 1 for +\n");
    printf("press 2 for -\n");
    printf("press 3 for *\n");
    printf("press 4 for /\n");
    printf("press 5 for %%\n");
    printf("press 0 for exit\n");
}
void input(int a, int b)
{
    printf("Enter A :");
    scanf("%d", &a);
    printf("Enter B :");
    scanf("%d", &b);
}
int main()
{
    int a, b, choice, c, ans;
    while (c != 0)
    {
        printf("press 1 for +\n");
        printf("press 2 for -\n");
        printf("press 3 for *\n");
        printf("press 4 for /\n");
        printf("press 5 for %%\n");
        printf("press 0 for exit\n");

        printf("Enter your choice :");
        scanf("%d", &c);
        printf("Enter A :");
        scanf("%d", &a);
        printf("Enter B :");
        scanf("%d", &b);

        switch (c)
        {
        case 1:

            printf("sum of %d and %d : %d\n", a, b, ans = sum(a, b));
            break;
        case 2:

            printf("sub of %d and %d : %d\n", a, b, ans = sub(a, b));
            break;

        case 3:

            printf("mult of %d and %d : %d\n", a, b, ans = mult(a, b));
            break;

        case 4:

            printf("div of %d and %d : %d\n", a, b, ans = div(a, b));
            break;

        case 5:

            printf("mod of %d and %d : %d\n", a, b, ans = mod(a, b));
            break;
        case 0:
            break;
        default:
            printf("invaid ");
            break;
        }
    }
}