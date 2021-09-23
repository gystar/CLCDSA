#include<stdio.h>

int main(void){
  int s,k,x,y,z,ans=0;
  scanf("%d %d",&k,&s);
  for(x=0;x<=k;x++){
    for(y=0;y<=k;y++){
      if((0<=s-(x+y)) && (s-(x+y)<=k)) ans++;
    }
  }
  printf("%d\n",ans);
  return 0;
} 