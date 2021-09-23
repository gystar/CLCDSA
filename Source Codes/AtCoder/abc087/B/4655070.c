#include <stdio.h>
int main(){
  int a,b,c,x;
  scanf("%d%d%d%d",&a,&b,&c,&x);
  int ans = 0;
  int i,j;
  for(i=0;i<=a;i++){
    for(j=0;j<=b;j++){
      int tmp = i * 500 + j * 100;
      if (x - tmp >= 0 && x - tmp <= c * 50){
        ans++;
      }
    }
  }
  printf("%d\n", ans);
  return 0;
} 