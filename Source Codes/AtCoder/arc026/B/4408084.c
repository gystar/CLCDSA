#include<stdio.h>

typedef long long int int64;

void run(void){
  int64 n;
  scanf("%lld",&n);
  int64 sum=0;
  int64 i;
  for(i=1;i*i<n;i++){
    if(n%i==0){
      sum+=n/i+i;
    }
  }
  if(i*i==n) sum+=i;
  sum-=n;
  puts(n==sum?"Perfect":n>sum?"Deficient":"Abundant");
}

int main(void){
  run();
  return 0;
} 