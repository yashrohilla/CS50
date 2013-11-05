#include <stdio.h>

void
main()
{
  printf("Enter the number: ");
  int x;
  int p = x;
  int a[10];
  int temp = 0;
  scanf("%d", &x);
  for(int i = 0; i < 10; i++)
  {
    int temp = x % 10;
    x = (x - temp)/10;
    a[i] = temp;
    a[i] = a[i]*a[i]*a[i];
  }

  for(int i = 0; i < 10; i++)
    temp = a[i] + temp;

  if(temp == p)
    printf("Armstrong number\n");
  else
    printf("Not an Armstrong number\n");

}
