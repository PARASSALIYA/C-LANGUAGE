#include <stdio.h>
#include <string.h>
int main()
{

    char n[10];
    char *ptr[10];
    printf("Enter your string :");
    scanf("%[^\n]", &n);
    
    *ptr = strlen(n);
    
    printf("string lenght :%d", *ptr);
}
