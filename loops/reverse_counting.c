#include <stdio.h>

int main() {
   int i, start, end;

   start = 1;
   end = 10;

   //reverse counting, we'll interchange loop variables

   for(i = end; i >= start; i--) 
      printf("%2d\n", i);

   return 0;
}
