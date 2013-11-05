#include <stdio.h>
#include <cs50.h>
#include <string.h>


void main()
{
  printf("enter the string: ");
  string p = GetString();
  for(int i = strlen(p) - 1; i >= 0; i--)
    printf("%c", p[i]);
  printf("\n");


}
