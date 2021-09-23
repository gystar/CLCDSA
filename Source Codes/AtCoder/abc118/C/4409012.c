#include <stdio.h>
int main(void){
  int N,i;
  long A,ans,c;
  scanf("%d",&N);
  scanf("%ld",&ans);
  for(i=1;i<N;i++){
    scanf(" %ld",&A);
    if(A<ans){A+=ans;ans=A-ans;A-=ans;}
    while(ans!=0){c=A%ans;A=ans;ans=c;}
    ans=A;
  }
  printf("%ld",ans);
  return 0;
} 