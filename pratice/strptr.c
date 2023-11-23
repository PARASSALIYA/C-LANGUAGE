#include<stdio.h>

int main()
{
    char n[20];
    char *ptr[20];
    printf("Enter your Name: ");
    scanf("%s", &n);
    for(int i = 0; n[i] !='\0';i++)
    {
       ptr[i] = &n[i];
    }
    printf("name :%s\n",*ptr);

}