#include<stdio.h>
#include<stdlib.h>

typedef long long int int64;

void run(void){
  int n,x;
  scanf("%d%d",&n,&x);
  int a;
  scanf("%d",&a);
  int64 ans=0;
  if(a>x){
    ans+=a-x;
    a=x;
  }
  while(--n){
    int b;
    scanf("%d",&b);
    if(a+b>x){
      ans+=a+b-x;
      b-=a+b-x;
    }
    a=b;
  }
  printf("%lld\n",ans);
}

int main(void){
  run();
  return 0;
} 