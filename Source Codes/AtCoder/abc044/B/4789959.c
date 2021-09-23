#include<stdio.h>

int main(){
  char S[111];
  S[0] = '\0';
  scanf("%s",S);
  int i,N;
  while(S[N] != '\0'){
    N++;
  };
  for(i=0;i<=N-1;i++)
    S[i] -= 'a';
  int count[30] = {0};
  for(i=0;i<=N-1;i++)
    count[S[i]]++;
  for(i=0;i<=26;i++)
    if(count[i]%2 == 1){
    printf("No");
    goto NO;
    };
  printf("Yes");
  NO:;
} 