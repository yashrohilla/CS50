/* helpers.c
\**************************************************************************** 
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 ***************************************************************************/
       
#include <cs50.h>

#include "helpers.h"


/*
 * Returns true if value is in array of n values, else false.
 */
void swap();

bool 
search(int value, int array[], int n)
{
    // TODO: re-implement as binary search


  int last = n;
  int first = 0;
  int mid;

  while(first <= last)
  {
    mid = (first + last) / 2;
    if(value < array[mid])
      last = mid - 1;
    else if(value > array[mid])
      first = mid + 1;
    else
      return true;
  }
  return false; 
}

/*
 * Sorts array of n values.
 */

void 
sort(int values[], int n)
{
    // TODO: implement an O(n^2) sort
    int x = 1;
    for(int i = 0; i < n; i++)
    {
      for(int j = x; j < n; j++)
      {
        if( values[i] > values[j] )
        {
          int temp = values[i];
          values[i] = values[j];
          values[j] = temp;
        }
      }
      x++;
    }

  return;
}

