#include <stdio.h>

int main()
{
    int r, c;

    printf("Enter row :");
    scanf("%d", &r);
    printf(" Column :");
    scanf("%d", &c);

    int i, j, a[r][c];

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("a[%d][%d] :", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    int row, col, rsum = 0,csum=0;
    printf("ENter row :");
    scanf("%d", &row);

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (i == row)
            {
                printf("row :%d\n", a[i][j]);
            }
        }
    }

    printf("ENter column :");
    scanf("%d", &col);


    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (j == col)
            {
                printf("col :%d\n", a[j][i]);
            }
        }
    }
    
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if(i==row)
            {
                rsum += a[i][j];
            }
        }
    }
    printf("row sum : %d", rsum);

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
           if(j==col)
           {
             csum += a[i][j];
           }
        }
    }
    printf("column sum : %d", csum);
}