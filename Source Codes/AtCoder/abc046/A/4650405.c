#include <stdio.h>

int main(){
  int a,b,c;
  scanf("%d %d %d", &a, &b, &c);
  int answer;
  if(a == b && b == c) answer = 1;
  else if(a == b || b == c || c == a) answer = 2;
  else answer = 3;
  printf("%d\n", answer);
  return 0;
} 