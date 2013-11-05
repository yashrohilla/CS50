#include <stdio.h>
#include <cs50.h>
#include <string.h>

void
main()
{
  printf("Enter the string please: ");
  string p = GetString();
  int temp = 0;

  for(int i = 0; i < strlen(p); i++)
  {
    if(p[i] == p[strlen(p) - 1 - i])
      temp++;
    else
    {
      printf("What a n00b\n");
      break;
    }
  }
  if(temp > 0)
    printf("It's a palindrome\n");
}

