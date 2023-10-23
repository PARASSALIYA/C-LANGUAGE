#include<stdio.h>

void cube (int a)
{
    printf("cube is :%d", a*a*a);
}
main()
{
    int a;
    printf("Enter any number :");
    scanf("%d",&a);
    cube(a);
}