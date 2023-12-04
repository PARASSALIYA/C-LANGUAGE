#include<stdio.h>

int sum (int i,int a,int s)
{
	if(i<=a)
	{
		s+=i;
		i++;
		sum(a,i,s);
   }
   else
   {
   	printf("%d",s);
   }
}
int main()
{
	int n;
	printf("Enter N :");
	scanf("%d",&n);
    sum(n,1,0);
    return 0;
}
