#include <stdio.h>

int main()
{
    char n[10], n1[20];

    printf("ENter N :");
    scanf("%s", &n);
   int i,upper=0,lower=0;
    for ( i = 0; n[i] != '\0'; i++)
    {
        if (n[i - 1] ==0)
        {
            n[i]= upper(n[i]);
        }
        else
        {
            n[i]=lower(n[i]);
        }
    }
}
