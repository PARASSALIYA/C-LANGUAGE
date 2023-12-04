#include<stdio.h>

struct bill {
	int proprice;
    long long int contactno;
	int prodno;
	char name[10];
	char proname[10];
	  
}; 	

main()
{
	int n=1,i;
		
    struct bill b[n];
    printf("NAME :");
    scanf("%s",&b[i].name);           
	printf("CONTACT NUMBER :");
    scanf(" %lld",&b[i].contactno);
    
   
    for(i=0;i<n;i++)
    {
    	printf("PROPRICE :");
        scanf("%d",&b[i].proprice);
        printf("PRODNAME : ");
        scanf("%s",&b[i].proname);
		printf("PRODUCT NUBER :");
        scanf("%d",&b[i].prodno);       
    }
    int price,gst=18/100;
    printf("NAME\t\tCONTACT NUMBER \t\t PROPRICE\t\tPRODUCT NAME\t\tPRODNUMBER\t\t PRICE\n");
    for(i=0;i<n;i++)
    {
    	printf("%s\t\t%lld\t\t%d\t\t%s\t\t%d\t\t%d\n",b[i].name,b[i].contactno,b[i].proprice,b[i].proname,b[i].prodno,b[i].proprice*b[i].prodno,price+gst);
    }
    
}
