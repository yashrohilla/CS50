/* This program is used
 * to find all possible factors
 * of a number */

#include <stdio.h>
#include <cs50.h>

int
main()
{
  printf("Enter a number: ");
  int x = GetInt();
  int j = 0;
  int a[10];

  for(int i = 1; i <= x; i++)
  {
    if(x % i == 0)
    {
      a[j] = i;
      j++;
    }
  }

  for(int i = 0; i < j; i++)
    printf("%d\t", a[i]);

  printf("\n");

  return 0;
}
