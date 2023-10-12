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
	printf("ans :%d",(x*x)+(2*x*y)+(y*y));
	getch();
}
