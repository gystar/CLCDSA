#include<stdio.h>
int n, p, a, i;
char odd;
long ans;
int main(){
  scanf("%d%d", &n, &p);
  for(i=0; i<n; i++){
    scanf("%d", &a);
    if(a&1){odd=1; break;}
  }
  if(odd){
    ans = (long)1<<n-1;
  }else{
    if(p){
      ans = 0;
    }else{
      ans = (long)1<<n;
    }
  }
  printf("%ld\n", ans);
} 