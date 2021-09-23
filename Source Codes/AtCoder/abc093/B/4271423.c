#include<stdio.h>
int main(){
  int a,b,k,i;
  scanf("%d%d%d",&a,&b,&k);
  for(i=a;i<=b;i++){
    if(i<a+k||i>b-k) printf("%d\n",i);
  }
} 