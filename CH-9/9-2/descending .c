#include <stdio.h>

int main() 
{
    int arr[] = {5,2,8 ,1 ,9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;
    printf("Original array: ");
    for ( i = 0; i < n; i++) 
	{
    printf("%d", arr[i]);
    }
    
     int  j, temp;
    for (i = 0; i < n-1; i++) 
	{
        for (j = 0; j < n-i-1; j++)
		 {
            if (arr[j] < arr[j+1]) 
			{
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    printf("\nArray in descending order: ");
    for (i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]);
    }
    
}
