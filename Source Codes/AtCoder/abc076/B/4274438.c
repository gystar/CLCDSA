#include<stdio.h>
int main(){
  int n,k,s=1;
  scanf("%d%d",&n,&k);
  while(n){
    s+=s>k?k:s;
    n--;
  }
  printf("%d",s);
} 