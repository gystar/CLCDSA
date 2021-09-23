#include<stdio.h>
int main(){
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  int max=b+c;
  if(a+b<c){
    max = a + b*2 +1;
  }
  printf("%d\n",max);
  return 0;
} 