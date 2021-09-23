#include<stdio.h>
int main(){
  int n,i,a,c=0,s=0,b[100010]={};
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a);
    b[a]++;
  }
  for(i=0;i<100010;i++){
    if(b[i]==0)continue;
    s++;
    if(b[i]%2==0)c++;    
  }
  printf("%d\n",s-c%2);
  return 0;
} 