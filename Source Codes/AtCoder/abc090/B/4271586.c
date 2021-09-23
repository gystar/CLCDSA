#include<stdio.h>
int main(){
  int a,b,i,j=0;
  scanf("%d%d",&a,&b);
  for(i=a;i<=b;i++){
    if(i/10000==i%10&&(i/1000)%10==(i/10)%10)j++;
  }
  printf("%d",j);
} 