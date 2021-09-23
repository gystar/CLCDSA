#include<stdio.h>
int min(int a, int b){return a>b?b:a;}
int n, i;
int a;
int ans, now;
int main(){
  ans = 16384;
  scanf("%d", &n);
  for(i=0; i<n; i++){
    scanf("%d", &a);
    now=0;
    while(!(a&1)){a>>=1; now++;}
    ans = min(now, ans);
  }
  printf("%d\n", ans);
} 