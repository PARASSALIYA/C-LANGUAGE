#include <stdio.h>
#include <string.h>
int main()
{
  char name[10];
  char name1[10];
  int len = 0, n = 0, pal = 0;
  printf("Enter any string :");
  scanf("%s", &name);
  for (int i = 0; name[i] != '\0'; i++)
  {
    len++;
  }
  for (int i = len - 1; i >= 0; i--)
  {
    name1[n++] = name[i];
  }

  for (int i = 0; name[i] != '\0'; i++)
  {
    if (name[i] == name1[i])
    {
      pal++;
    }
  }
  if (pal == len)
  {
    printf("Given string is  a palindrome.");
  }
  else
  {
    printf("Given string is not a palindrome.");
  }
  return 0;
}