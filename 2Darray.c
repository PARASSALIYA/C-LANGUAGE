#include<stdio.h>

int main()
{
    int r,c;
    printf("ENter R :");
    scanf("%d",&r);
    printf("ENter C :");
    scanf("%d",&c);

    int a[r][c],i,j,temp=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("a[%d][%d] :",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
            else
            {
                printf(" ");
            }
        }
    }
        printf("%d",a[i][j]);
}