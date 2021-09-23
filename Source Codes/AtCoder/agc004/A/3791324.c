#include<stdio.h>
#include<math.h>
int main(void){
  unsigned long long a=0,b=0,c=0,ans;
  scanf("%llu%llu%llu",&a,&b,&c);
  ans=(a*b<b*c)?(a*b<a*c)?a*b:a*c:(b*c<a*c)?b*c:a*c;
  if(a%2*b%2*c%2)printf("%llu",ans);
  else puts("0");
  return 0;
} 