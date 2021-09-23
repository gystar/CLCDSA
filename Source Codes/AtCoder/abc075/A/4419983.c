#include<stdio.h>
int n[3], ans;
int main(){
  scanf("%d%d%d", n, n+1, n+2);
  if(n[0] == n[1]){
    ans = n[2];
  }else if(n[0] == n[2]){
    ans = n[1];
  }else{
    ans = n[0];
  }
  printf("%d\n", ans);
} 