#include<stdio.h>
int main(){
  long long n,a,i;
  scanf("%lld",&n);
  a=n/50;
  printf("50\n");
  if(a==0){
    for(i=0;i<50;i++){
      if(i)printf(" ");
      if(i<n)printf("50");
      else   printf("0");
    }
  }
  else{
    for(i=0;i<50;i++){
      if(i)printf(" ");
      if(i<n%50)printf("%lld",a+50);
      else      printf("%lld",a+49-n%50);
    }
  }
  printf("\n");
  return 0;
} 