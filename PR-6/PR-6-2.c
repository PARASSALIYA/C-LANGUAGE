#include<stdio.h>

int main()
{
    char n[20];
    printf("Enter any string :");
    scanf("%s",&n);


    for(int i=0;i<5;i++)
    {
         int a=1;
        for(int j=i+1;j<5;j++)
        {
            if(n[i]==n[j])
            {
                a++;
            }
        }
        printf("%c : %d\n",n[i],a);
    }
}