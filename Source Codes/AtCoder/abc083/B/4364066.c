#include <stdio.h>
#include <math.h>
int main(void){
  int n,a,b;
  scanf("%d %d %d",&n,&a,&b);
  int i,sum=0,j,tmp;
  for(i=1;i<=n;i++){
    tmp=0;j=i;
    while(j!=0){
      tmp+=j%10;
      j/=10;
    }
    if(tmp>=a&&tmp<=b) sum+=i;
  }
  printf("%d",sum);
  return 0;
} 