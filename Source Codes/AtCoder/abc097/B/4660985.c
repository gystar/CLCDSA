#include<stdio.h>
int max2(int a, int b){return a<b?b:a;}
int x;
int ans, i, j;
int main(){
  scanf("%d", &x);
  if(x==1){
    printf("1\n");
    return 0;
  }
  for(i=2; i<x; i++){
    for(j=i*i; j<=x; j*=i){
      ans=max2(ans, j);
    }
  }
  printf("%d\n", ans);
} 