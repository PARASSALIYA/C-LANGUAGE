#include<stdio.h>

int main()
{
    int r,c;
    printf("ENter row :");
    scanf("%d",&r);
    printf("Enter column :");
    scanf("%d",&c);

    int i,j,a[r][c],large=0;
     

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
      for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if(a[i][j]>large)
            {
                large = a[i][j];
            }
        }
    }
    printf("%d\n",large);
}