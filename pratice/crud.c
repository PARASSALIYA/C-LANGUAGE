#include <stdio.h>

int ist(int n, int a[])
{
    for (int i=0;i<n;i++)
    {
        int i=7;
        printf("a[%d] :",i);
    }
}

int main()
{
    int n;
    printf("Enter array size :");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] :", i);
        scanf("%d", &a[i]);
    }
   
    printf("---------------------------\n");
    int insert = ist(n, a);
    printf("INSERT :%d\t", ist);
}