#include<stdio.h>

int main()
{
	int size;
	printf("Enter array size :");
	scanf("%d",&size);
	printf("\nEnter array elements :\n");
	
	int i,a[size],sum=0;
	
	for(i=0;i<size;i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		sum=sum+a[i];
	}
	printf("Average of an Array :%d",sum/size);
}
