#include<stdio.h>
int main(){
  int n,a,min=1000,max=0;
  scanf("%d",&n);
  while(n--){
    scanf("%d",&a);
    if(a<min) min=a;
    if(a>max) max=a;
  }
  printf("%d",max-min);
} 