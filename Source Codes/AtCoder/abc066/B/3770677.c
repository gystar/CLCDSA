#include<stdio.h>
int n, i, j, flag;
char S[201];
int main(){
  scanf("%s", S);
  while(S[n]){n++;}
  i=(n>>1)-1;
  while(1){
    flag=1;
    for(j=0; j<i; j++){
      if(S[j] != S[j+i]){flag=0; break;}
    }
    if(flag){break;}
    i--;
  }
  printf("%d\n", i*2);
} 