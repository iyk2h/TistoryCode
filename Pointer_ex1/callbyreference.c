#include <stdio.h>
 
void swap(int *x, int *y);
 
int main () {

   int a = 10;
   int b = 20;
 
   printf("swap 전 a : %d\n", a );
   printf("swap 전 b : %d\n", b );
 
   swap(&a, &b);
 
   printf("swap 후 a : %d\n", a );
   printf("swap 후 b : %d\n", b );
 
   return 0;
}
void swap(int *x, int *y) {

   int temp;
   temp = *x;
   *x = *y;
   *y = temp;

   return;
}
