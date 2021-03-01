#include<stdio.h>
char str[100], w;
int i;
int main ()
{
  scanf ("%s", str);
  while (str[i] != '\0')
    {
      w = str[i];
      printf ("%c", str[i]);
      while (str[i] == w)
        i++;
    
    }
  return 0;

}

