#include<stdio.h>
#include<stdlib.h>
int main(){
  int n,l,d,bt=0,t,x,bx=0,y,by=0,f=1;
  scanf("%d",&n);
  while(n--){
    scanf("%d %d %d",&t,&x,&y);
    l=abs(x-bx)+abs(y-by);
    d=t-bt;
    if(l>d||d%2-l%2)f=0;
    by=y;
    bx=x;
    bt=t;
  }
  printf("%s\n",f?"Yes":"No");
  return 0;
} 