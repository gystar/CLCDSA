#include<stdio.h>
#include<stdlib.h>
int main(){
  int a,b,ans;
  scanf("%d %d",&a,&b);
  ans=abs(abs(a)-abs(b));
  if(a>0){
    if(b>0){
      if(a>b)ans+=2;
      else ans+=0;
    }
    else ans+=1;
  }
  else if(a==0){
    if(b<0)ans++;
  }
  else{
    if(b>0)ans++;
    else{
      if(a>b)ans+=2;
    }
  }
  printf("%d\n",ans);
  return 0;
} 