#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Generate a prime number
 * using function rand()
 */

int
main()
{
      while(1)
      {
       srand(time(NULL));
       int num = rand();
       int count = 0;

       int i = 2;

        while(i <= num/2)
         {
          if(num % i == 0)
            {
             count++;
             break;
             return 1;
            }
         i++;
         }

        if(count == 0 && num != 1)
         {
          printf("%d\n", num);
          return 0;
         }

      }

}

