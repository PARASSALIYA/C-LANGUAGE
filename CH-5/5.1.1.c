#include<stdio.h>
#include<conio.h>
main()
 {
	int a,b;
	clsrscr();
	printf("Enter of the first number :");
	scanf("%d",&a);
	printf("Enter of the second number :");
	scanf("%d",&b);
	if(a<b)
	{
		printf("the minimum value is :%d",a);
	}	
	else
	{
		printf("the minimum value is :%d",b);
	}
	getch();
 }
