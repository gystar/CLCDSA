#include <stdio.h>

int main(void){
  int N,Q;
  scanf("%d%d",&N,&Q);

  int a[N];
  for(int i = 0;i < N;i++) a[i] = 0;

  int l,r,t;
  for(int i = 0;i < Q;i++){
    scanf("%d%d%d",&l,&r,&t);
    for(int j = l-1;j < r;j++) a[j] = t;
  }

  for(int i = 0;i < N;i++) printf("%d\n",a[i]);
  printf("\n");

  return 0;
} 