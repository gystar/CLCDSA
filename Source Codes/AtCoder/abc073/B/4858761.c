#include <stdio.h>
int main(void){
int n;
  int a,b;
  int count;
  int total=0;
  scanf("%d",&n);
  for(count=0;count!=n;count++){
  scanf("%d %d",&a,&b);
  total=total+(b-a+1);
  }
  printf("%d",total);
return 0;
} 