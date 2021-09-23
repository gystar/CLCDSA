#include <stdio.h>
int main(){

  int n,t,a[200000],result=0,i;

  scanf("%d %d",&n,&t);

  for(i = 0; i < n; i++) scanf("%d",&a[i]);

  for(i = 0; i < n-1; i++){

    if(a[i+1]-a[i] < t) result += a[i+1]-a[i];
    else result	+= t;

  }

  result += t;
  printf("%d\n",result);

  return 0;

} 