#include <stdio.h>
#include <cs50.h>

void
main()
{
  printf("Enter the number of levels: ");
  int x = GetInt();

  for(int i = 1; i <= x; i++)
  {
    for(int j = 1; j <= x - i; j++)
      printf(" ");
    for(int k = 1; k <= i; k++)
      printf(" *");
    printf("\n");
  }
}
