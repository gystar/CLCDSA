#include<stdio.h>
int main(void){
  int N,S=0,i=0;
  char n[20]={'\0'};
  scanf("%d",&N);
  sprintf(n,"%d",N);
  while(n[i]!='\0'){
    S+=(n[i]-48);
    i++;
  }
  if(N%S==0){
    printf("Yes\n");
  }else{
    printf("No\n");
  }
  return 0;
} 