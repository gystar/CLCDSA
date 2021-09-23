#include <stdio.h>
int main(){
  int A, B, a, count=0;
  int c[5];
  scanf("%d%d", &A, &B);
  for (; A<B+1 ;A++){
    a = A;
    for (int i=0; i<5; i++){
      c[i]=a%10;
      a/=10;
    }
    if (c[0]==c[4] && c[1]==c[3]){
      count++;
    }
  }
  printf("%d",count);
  return 0;
} 