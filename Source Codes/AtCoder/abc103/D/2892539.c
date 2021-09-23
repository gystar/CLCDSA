#include<stdio.h>

int main(){
  int n, m;
  scanf("%d %d", &n, &m);
  int b[n+5], i, tmp1, tmp2;
  for(i=0;i<=n;i++) b[i] = 0;
  for(i=0;i<m;i++){
    scanf("%d %d", &tmp1, &tmp2);
    if(tmp1>b[tmp2]) b[tmp2] = tmp1;
  }
  tmp1=1, tmp2=0;
  for(i=2;i<=n;i++){
    if(b[i]>=tmp1){
      tmp1 = i;
      tmp2++;
    }
  }
  printf("%d\n", tmp2);
  return 0;
} 