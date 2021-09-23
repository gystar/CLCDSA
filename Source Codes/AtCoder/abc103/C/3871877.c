#include <stdio.h>

int main(){
  int n,a,sum=0;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
	scanf("%d",&a);
    sum+=a-1;
  }
  printf("%d",sum);
} 