#include<stdio.h>
int main(){
  int n,l,r,s=0;
  scanf("%d",&n);
  while(n--){
    scanf("%d%d",&l,&r);
    s+=r-l+1;
  }
  printf("%d",s);
} 