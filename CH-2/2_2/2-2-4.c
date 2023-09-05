#include<stdio.h>
#include<conio.h>
main()
{
	int  principal,rate,time,interest;
	clrscr();
	printf("Enter principal :");
	scanf("%d",&principal);
	printf("Enter rate :");
	scanf("%d",&rate);
	printf("Enter time : ");
	scanf("%d",&time);
	
	interest = (principal*rate*time)/100;
	
	printf("simple interest :%d",interest);
	getch();
} 

