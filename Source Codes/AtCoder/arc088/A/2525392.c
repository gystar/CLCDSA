#include<stdio.h>

int main(){
  long long int x,y;
  int cnt=0;
  scanf("%lld %lld",&x,&y);
  while(x<=y){
    cnt++;
    x*=2;
  }
  printf("%d\n",cnt);
} 