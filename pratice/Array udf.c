#include <stdio.h>

int input()
{
    int size;
    scanf("%d", &size);
    return size;
}
void arrayinput(int a[], int size)
{

    printf("------ArrayInput-------\n");
    for (int i = 0; i < size; i++)
    {
        printf("a[%d]:", i);
        scanf("%d", &a[i]);
    }
}
void arrayoutput(int a[], int size)
{
  
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] :%d\n", i, a[i]);
    }
}
int arraysum(int a[], int size)
{
   
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += a[i];

    return sum;
}
double arrayavg(int a[], int size)
{
    printf("\nEnter array elements :\n");
    arrayinput(a, size);
    printf("------ArrayOutput-------\n");
    arrayoutput(a, size);
     printf("------ArraySum-------\n");
    int sum = arraysum(a, size);
    printf("Sum :%d", sum);

    return sum / size;
}
int main()
{
    int size;
    printf("Enter array size :");
    size = input();

    int a[size];
    double avg = arrayavg(a, size);

    printf("\nArray avg :%.2lf", avg);
    return 0;
}
