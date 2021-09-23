#include <stdio.h>

int main(){
  int n,a,b;
  scanf("%d %d %d",&n,&a,&b,stdin);
  int answer = 0;
  int sum;
  for(int i = 1; i <= n; ++i){
    sum = i % 10 + (i/10) % 10 + (i/100) % 10 + (i/1000) % 10 + (i/10000) % 10;
    if(a <= sum && sum <= b) answer += i;
  }
  printf("%d\n",answer);
  return 0;
} 