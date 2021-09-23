#include <stdio.h>
int main(){
  long long int n;
  scanf("%lld",&n);
  int a[200],i;
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  int count=0;
  while(1){
    for(i=0;i<n;i++){
      if(a[i]%2==0) a[i]/=2;
      else {printf("%d",count);return 0;}
    }
    count++;
  }
  return 0;
} 