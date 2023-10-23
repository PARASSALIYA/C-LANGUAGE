#include <stdio.h>
#include <string.h>
int main()
{
  /*1.strrev 2. strlen 3. strcmp
    4.strcpy 5.puts    6.  gets
    7.strupr 8. strlwr 9. strcat
  char n;
  printf("Enter your name :");
  scanf("%d",&n);
  puts(n);
  strrev(n);
  puts(n);
  printf("%s",strrev(n));
}
*/

  char psw[10];

  int len,i;

  int upr = 0, lwr = 0, digit = 0, specialsymbol = 0;

    printf("Create your password: ");
    scanf("%s", &psw);

  for (i = 0; psw[i] != '\0'; i++)
  {
    len++;
  }
  for(i=0;i<len;i++)
  {

    if (len > 6)
    {
    	len++;
    }
  }
  for ( i = 0; i < len; i++)
  {
    if (psw[i] >= 65 && psw[i] <= 90)
    {
      upr == 1;
    }
    else if (psw[i] >= 97 && psw[i] <= 122)
    {
      lwr == 1;
    }
    else if (psw[i] >= 48 && psw[i] <= 57)
    {
      digit == 1;
    }
    else if (psw[i] >= 33 && psw[i] <= 47)
    {
      specialsymbol == 1;
    }
    
  }  
    for ( i = 0; i < len; i++)
    {
      if (upr == 1 && lwr == 1 && digit == 0 && specialsymbol == 1)
      {
        puts("your password is strong ");
      }
      else
      {
        puts("your password is not strong");
      }
    }
  
}
