#include <stdio.h>

int main(void){
  int N,T;
  scanf("%d%d",&N,&T);

  int a,pa;
  long time = T;
  scanf("%d",&pa);
  for(int i = 1;i < N;i++){
    scanf("%d",&a);
    if(a-pa > T) time += T;
    else time += a-pa;
    pa = a;
  }

  printf("%ld\n",time);
  return 0;
} 