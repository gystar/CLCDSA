#include<stdio.h>
int main(){
  int n,i,a[200001];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  for(i=n-1;i>=0;i-=2){
    printf("%d ",a[i]);
  }
  i+=1+2*(n%2);
  for(;i<n;i+=2){
    printf("%d ",a[i]);
  }
} 