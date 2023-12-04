#include<stdio.h>

struct st
{
	int st_id;
	char st_name[10];
    int st_age;
};

int main()
{
	int n;
	printf("Enter N :");
	scanf("%d",&n);
	int i;
	struct st s[n];
	for(i=0;i<=n;i++)
	{
		printf("ENter your ID :");
		scanf("%d",&s[i].st_id);
	}
	for(i=0;i<=n;i++)
	{
		printf("id :",s[i].st_id);
	}
	
}
