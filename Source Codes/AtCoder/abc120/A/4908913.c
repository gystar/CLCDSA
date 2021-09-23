#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
int A, B, C;
scanf("%d %d %d", &A, &B, &C);

printf("%d", B/A<=C?B/A:C);
return 0;
} 