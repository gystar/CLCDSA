#include <stdio.h>
#include <string.h>
int main(){
  int a,b;
  scanf("%d %d",&a,&b);
  
  if(a == b) printf("%d\n",a);
  else if((a+b)%2 == 0) printf("%d\n",(a+b)/2);
  else printf("%d\n",(a+b)/2+1);
  return 0;
} 