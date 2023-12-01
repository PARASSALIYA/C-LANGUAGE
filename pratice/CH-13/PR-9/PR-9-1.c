#include<stdio.h>

int main()
{
    int a,b;

    FILE = fp;
    
    fp=fopen("even number.txt","w");

for(int i=50;i<70;i++)
{
    if(i%2==0)
    {
        fprintf(fp,"even number :%d",i);
    }
    else
    {
        fprintf(fp,"odd number :%d",i);
    }
}

    fclose(fp);
}