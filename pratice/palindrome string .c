#include <stdio.h>
#include <string.h>
int main()
{
    char name[5];
    char name1[10];

    printf("Enter any string :");
    scanf("%s", &name);
    strcpy(name1, name);
    strrev(name);
    int cmp = strcmp(name, name1);
    (cmp == 0)
        ? printf("palin")
        : printf("not palin");
}