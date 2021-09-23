#include <stdio.h>
int main(){
  long int a,b,c,ans;
  scanf("%ld%ld%ld",&a,&b,&c);
  ans=a+2*b+1;
  if(b+c<ans)ans=b+c;
  printf("%ld",ans);
} 