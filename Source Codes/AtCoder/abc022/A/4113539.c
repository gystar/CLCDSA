#include<stdio.h>

int main(void){
  int i,n,s,t,w=0,cnt=0;
  scanf("%d %d %d",&n,&s,&t);
  int d[n];
  
  for(i=0;i<n;i++){
    scanf("%d",&d[i]);
  }
  
  for(i=0;i<n;i++){
    w += d[i];
    if(s<=w && w<=t){
      cnt++;
    }
  }
  printf("%d\n",cnt);
  
  return 0;
} 