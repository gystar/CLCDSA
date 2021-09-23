#include<stdio.h>
int main(void){
  int i,t=0;
  char S[4];
  scanf("%s",S);
  for(i=0;i<4;i++){
    if(S[i]=='+'){
      t++;
    }else{
      t--;
    }
  }
  printf("%d\n",t);
  return 0;
} 