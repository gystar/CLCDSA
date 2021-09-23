#include<stdio.h>
int main(){
  int n,a,b=0,i;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a);
    b+=a%2;
  }
  puts(b%2?"NO":"YES");
} 