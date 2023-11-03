#include <stdio.h>

int main()
{
	char n[5];
	char n1[10];

	printf("Enter any string :");
	scanf("%s", &n);
	printf("Enter any string :");
	scanf("%s", &n1);
	for (int i = 0; i <= '\0'; i++)
	{
		if (n[i] == n1[i])
		{
			printf("compares successful");
		}
		else
		{
			printf("not compares successful");
		}
	}
}
