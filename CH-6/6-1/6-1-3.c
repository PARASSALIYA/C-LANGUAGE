#include<stdio.h>
#include<conio.h>
main()
{
	int a=1,n;
	clrscr();
	printf("Enter any Number :");
	scanf("%d",&n);
	while(a<=n)
	{
		printf("%d\n",a);
		a++;
	}
	getch();
}
