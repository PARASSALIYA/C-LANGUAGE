#include <stdio.h>

int main() 
{
    int arr[] = {4,6,8,0,1,2};
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
            if (arr[j] < arr[j-1]) 
			{
                temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
    
    printf("\nArray in aescending order: ");
    for (i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]);
    }    	
}

