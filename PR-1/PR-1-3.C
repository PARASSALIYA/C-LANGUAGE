#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	clrscr();
	printf("frist angle :");
	scanf("%d",&a);
	printf("second angle :");
	scanf("%d",&b);
	printf("third angle :%d",180-(a+b));
	getch();
}
