#include <stdio.h>

int main(){
  int a,b,c,k;
  scanf("%d %d %d\n%d",&a,&b,&c,&k);
  int answer;
  answer = a;
  if(a < b) answer = b;
  if(a < c && b < c) answer = c;
  int answer0 = answer;
  for(int i = 0; i < k; ++i) answer *= 2;
  answer += a + b + c - answer0;
  printf("%d\n",answer);
  return 0;
} 