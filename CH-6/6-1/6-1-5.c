#include<stdio.h>
#include<conio.h>
main()
{
	int y1,y2;
	clrscr();
	printf("Enter Y1 :");
	scanf("%d",&y1);
	printf("Enter Y2 :");
	scanf("%d",&y2);
	while(y1<=y2)
	{
		if(y1%4==0)
		printf("%d\n",y1);
		y1++;
	}
	getch();
}
