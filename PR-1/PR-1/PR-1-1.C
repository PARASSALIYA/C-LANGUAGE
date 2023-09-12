#include<stdio.h>
#include<conio.h>
main()
{
	int f,c;
	clrscr();
	printf("the temperature in celcius :");
	scanf("%d",&c);
	f=(c*1.8)+32;
	printf("the temprature in fahrenheit :%d",f);
	getch();

}