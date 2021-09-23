#include<stdio.h>
#include<math.h>
int main(){
  int x,i,j,ans=0;
  scanf("%d",&x);
  for(i=1;i<32;i++){
    for(j=2;j<10;j++){
      if(pow(i,j)<=x&&ans<pow(i,j)){
        ans=(int)pow(i,j);
      }
    }
  }
  printf("%d",ans);
} 