#include <stdio.h>

int main() {
   int n,i,j;

   n = 5;

   for(i = 1; i <= n; i++) {
      for(j = 1; j < i; j++)
         printf(" "); 

      for(j = i; j <= n; j++)
         printf("* ");

      printf("\n");
   }

   return 1;
}