#include<stdio.h>
int main(){
  int n,m,a,b,i;
  int d[200010]={};
  scanf("%d %d",&n,&m);
  while(m--){
    scanf("%d %d",&a,&b);
    if(a==1)d[b]+=2;
    if(b==1)d[a]+=2;
    if(a==n)d[b]+=1;
    if(b==n)d[a]+=1;
  }
  for(i=2;i<n;i++){
    if(d[i]==3)break;
  }
  if(i==n)printf("IM");
  printf("POSSIBLE\n");
  return 0;
} 