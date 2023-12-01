#include <stdio.h>

int main()
{
    FILE *a;

    a = fopen("div.txt", "w");
    
    for (int i = 1; i < 50; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
         fprintf(a, "%d ", i);
        }
    }
    fclose(a);
}
