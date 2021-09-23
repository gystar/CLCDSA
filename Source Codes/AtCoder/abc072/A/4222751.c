#include <stdio.h>

long max(long a,long b){
  if(a > b){
    return a;
  }
  return b;
}

int main(void){
  long X,t;
  scanf("%ld%ld",&X,&t);


  printf("%ld\n",max(0,X-t));

  return 0;
} 