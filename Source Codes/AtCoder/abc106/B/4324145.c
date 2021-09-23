#include<stdio.h>

int main(){
  int n,i,p[5]={105,135,165,189,195};
  scanf("%d",&n);
  for(i=0;i<5;i++){
    if(p[i]>n) break;
  }
  printf("%d",i);
} 