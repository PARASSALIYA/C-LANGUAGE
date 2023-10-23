#include<stdio.h>

int main()
{
	char a[26];
	int n = sizeof(a) / sizeof(a[0]);
	int i;
    printf("Original name : ");
	scanf(" %s",&a);

	int j,temp;
	
	 for (i = 0; i < n-1; i++) 
	 {
        for (j = 0; j < n-i; j++) 
		{
            if (a[j] < a[j-1]) 
			{
                temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
        }
    }
    printf("string in aescending order : ");
	for(i=0;i<n;i++)
	{
		printf(" %c",a[i]);
	}
	
	
}
