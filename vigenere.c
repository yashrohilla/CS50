#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <stdlib.h>

int
main(int argc, char *argv[])
{

  string k = argv[1];
  int j;
  int q;
  int x;
  int l;

  if ( argc > 2 )
  {
    printf("Only one encryption key please.\n");
    return 1;
  }

 for ( j = 0; j < strlen(k); j++ )
 {
   l = (int)k[j];
   if(( l < 65 || l > 90 ) && ( l < 97 || l > 122 ))
   {
     printf("Please enter an alphabetic key");
     return 1;
   }
 }
  


  string p = GetString();

   for (int i = 0, j = 0; i < strlen(p); i++)
  {

      q = (int)p[i];
      l = (int)k[j];


      if(l >= 65 && l <= 90)
        l = l - 65;
      else if(l >= 97 && l <= 122)
        l = l - 97;
        x = l + q;

       if((q >=65 && q <=90) && x > 90)
       {
         x = x - 26;
         printf("%c", (char)x);
         j++;
       }
       else if(q >= 65 && q <= 90)
       {
         printf("%c", (char)x);
         j++;
       }
       else if((q >= 97 && q <=122) && x > 122)
       {
         x = x - 26;
         printf("%c", (char)x);
         j++;
       }
       else if(q >=97 && q <= 122)
       {
         printf("%c", (char)x);
         j++;
       }
       else
       {
         printf("%c", p[i]);
       }

       if ( j == strlen(k) )
         j = 0;
  }
printf("\n");
return 0;
}
