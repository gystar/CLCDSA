#include <stdio.h>

int main()
{
  int i=1,N;
  long long int pw=1;
  scanf("%d",&N);
  for(i=1;i<=N;i++){
    pw = i*pw%1000000007; 
  }
  printf("%d",pw);
  return 0;
} 