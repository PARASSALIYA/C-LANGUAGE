#include<stdio.h>

main()
{
	int a[5]={5,2,8,1,9};
	int i,j,temp;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
		    }
		}
	}
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
    }
}
