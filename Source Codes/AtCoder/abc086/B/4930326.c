#include <stdio.h>
#include <math.h>
int main(void)
{
 int A, B, X, i, j;
 scanf("%d %d", &A, &B);
 if(B < 10) {
   X = A * 10 + B;
 }
 else if(B < 100) {
   X = A * 100 + B;
 }
 else{
   X = A * 1000 + B;
 }
 for(j = 3; j * j <= 100100; j++) {
   if(X == j * j) {
     printf("Yes");
     return 0;
   }
 }
   printf("No");
 return 0;
} 