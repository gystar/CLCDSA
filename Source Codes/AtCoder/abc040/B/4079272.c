#include <stdio.h>
#include <stdlib.h>
int main(){
  int n,ans=100000000;
  scanf("%d",&n);
  if(n==1){
      printf("0");
      return 0;
  }
  for(int h=1;h<n;h++){
      int w=n/h;
      if(abs(w-h)+n-(h*w)<ans){
          ans=abs(w-h)+n-(h*w);
      }
  }
  printf("%d",ans);
  return 0;
} 