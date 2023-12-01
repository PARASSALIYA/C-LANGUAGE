#include <stdio.h>

int main()
{
    int i;
    FILE *fp;
    fp = fopen("Even Number.txt","w");
    fprintf(fp,"Even Number :");
    for (i = 50; i < 70; i++)
    {
        if (i % 2 == 0)
        {
            fprintf(fp, "%d ", i);
        }
    }
    fclose(fp);
    
    printf("\n\n");
    FILE *fp1;
    fp1 = fopen("odd Number.txt","w");
    fprintf(fp,"odd Number :");
    for (i = 50; i < 70; i++)
    {
        if (i % 2 == 1)
        {
            fprintf(fp, "%d ", i);
        }
    }
    fclose(fp1);
}

