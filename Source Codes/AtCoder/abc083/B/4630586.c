#include <stdio.h>
int main(void){
  int n,a,b,i,j,sum=0,tmp,ttl;
  scanf("%d %d %d",&n,&a,&b);
  for(i=1;i<=n;i++){
    tmp=i;ttl=0;
    while(tmp!=0){
      ttl+=tmp%10;
      tmp/=10;
    }
    if(ttl>=a&&ttl<=b) sum+=i;
  }
  printf("%d",sum);
  return 0;
} 