#include<stdio.h>

int main()
{
    FILE *a;
    
    a=fopen("read.txt","w");

    fprintf(a,"hello world ");

    fclose(a);
}
