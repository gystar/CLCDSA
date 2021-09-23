#include<stdio.h>
#include<math.h>
int main(){
  int n,i,min=99999;
  scanf("%d",&n);
  for(i=1;i<=sqrt(n);i++){
    if(min>n/i-i+n%i) min=n/i-i+n%i;
  }
  printf("%d",min);
} 