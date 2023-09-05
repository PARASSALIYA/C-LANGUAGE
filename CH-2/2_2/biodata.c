#include<stdio.h>
main()
{
	int a,w;
	int long long m;
	char b;
	float h;
	printf("Enter your age :");
	scanf("%d",&a);
	printf("Enter your blood group :");
	scanf(" %c",&b);
	printf("Enter your weight :");
	scanf("%d",&w);
	printf("Enter your height :");
	scanf("%f",&h);
	printf("Enter your mobile number :");
	scanf("%lld",&m);
	
	printf("\nPARAS SALIYA \n");
	printf("age :%d\n blood group: %c \n weight: %d \n height: %.2f \n mobile number :%lld",a,b,w,h,m);
	
}
