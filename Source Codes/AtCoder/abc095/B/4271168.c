#include<stdio.h>
int main(){
  int n,x,m[100],i,min=1000,sum=0;
  scanf("%d%d",&n,&x);
  for(i=0;i<n;i++){
    scanf("%d",&m[i]);
    sum+=m[i];
    if(min>m[i]) min=m[i];
  }
  printf("%d",n+(x-sum)/min);
} 