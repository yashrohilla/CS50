#include <stdio.h>
#include <cs50.h>

void
main()
{
  printf("Enter the number: ");
  int x;
  scanf("%d", &x);
  int a[x];

  a[1] = 1;
  a[0] = 0;

  for(int i = 2; i < x; i++)
  {
    a[i] = a[i-1] + a[i-2];
  }

  for(int i = 0; i < x; i++)
    printf("%d \t", a[i]);
  printf("\n");



}
