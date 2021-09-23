#include<stdio.h>
int main(){
  int n,m,a,i,j=1,d[10]={};
  scanf("%d %d",&m,&n);
  for(i=0;i<n;i++){
    scanf("%d",&a);
    d[a]=1;
  }
  for(i=m;j;i++){
    for(j=i;j;j/=10){
      if(d[j%10])break;
    }
  }
  printf("%d\n",i-1);      
  return 0;
} 