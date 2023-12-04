#include<stdio.h>

main()
{
	char email[10];
	char psw[10];
	int i;
	printf("Enter email :");
	scanf("%s",&email);
	printf("Enter psw :");
	scanf("%s",&psw);
	int symbol=0,digit=0,upper=0,lower=0;

	    if(symbol==1 || digit==1 || upper==1 || lower==1)
	    {
	        printf("login successful\n");	
	    }	
	    else
	    {
	    	printf(" invaid\n");
	    }

	
	
	for(i=0;psw[i]!=NULL;i++)
	{
		if(psw[i]<8)
		{
			printf("login successful\n");
		}
		else
		{
			printf("invaid\n");
		}
	}

}
