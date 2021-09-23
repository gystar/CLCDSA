#include<stdio.h>

int main(){
  int L, H, N, a[50] = {0}, b, i;
  scanf("%d %d", &L, &H);
  scanf("%d", &N);
  for (i = 0; i < N; i++){
    scanf("%d", &b);
    if(b < L){
      a[i] = L - b;
    } else if(b > H){
      a[i] = -1;
    }
  }
  
  for (i = 0; i < N; i++){
    printf("%d\n", a[i]);
  }
  
  return 0;
} 