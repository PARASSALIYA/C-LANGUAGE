#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	clrscr();
  	printf("1)sunday   \n");
	printf("2)monday   \n");
    printf("3)Tuseday  \n");
    printf("4)wednesday\n");
    printf("5)Thursday \n");
	printf("6)Friday   \n");
    printf("7)Saturday \n");
    printf("Enter your choice :");
    scanf("%d",&n);
	switch (n)
	{
	
		case 1:
			printf("1) sunday ");
			break;
		case 2:
			printf("2) monday ");
			break;
		case 3:
			printf("3) Tuseday");
			break;	
		case 4:
			printf("4) wednes day");
			break;	
		case 5:
			printf("5) Thurs day");
			break;	
		case 6:
			printf("6) Friday");
			break;	
		case 7:
			printf("7) Saturday");
			break;	
		default :
			printf("invalid ");	
	}
	getch();
}
