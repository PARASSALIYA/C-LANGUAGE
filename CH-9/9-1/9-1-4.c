#include <stdio.h>

int main()
{
    char n[10], n1[20];

    printf("ENter N :");
    scanf("%s", &n);

    for (int i = 0; n[i] != '\0'; i++)
    {
        if (n[i - 1] =='')
        {
            n[i]= upper(n[i]);
        }
        else
        {
            n[i]=lower(n[i]);
        }
    }
}
