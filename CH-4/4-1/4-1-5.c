#include<stdio.h>
#include<conio.h>
main()
{
	int x,y;
	clrscr();
	printf("Enter X :");
	scanf("%d",&x);
	printf("Enter y :");
	scanf("%d",&y);
	printf("Ans :%d",(x*x*x)+(3*x*x*y)+(3*x*y*y)+(y*y*y));
	getch();
} 
