#include <stdio.h>

int main(){
  int a,b;
  scanf("%d %d",&a,&b);
  int answer;
  answer = a;
  if(a > b) a--;
  printf("%d\n",a);
  return 0;
} 