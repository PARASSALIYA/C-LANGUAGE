#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	clrscr();
	printf("Enter A :");
	scanf("%d",&a);
	printf("Enter B :");
	scanf("%d",&b);
	printf("Enter C :");
	scanf("%d",&c);
	if(a<b)
	{

		if(a<c)
		{
			printf("a is small");
		}
		else
		{
			printf("c is small");
		}
    }
	else
	{
		if(b<c)
		{
			printf("b is small");
		}
		else
		{
			printf("c is small");
		}
	}
	getch();
}
