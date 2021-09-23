#include <stdio.h>
#include <stdlib.h>
int main(void){
int n,x;
  int aa,bb;
  scanf("%d %d",&n,&x);
  if((x-1)>=n-x){printf("%d\n",n-x);}
  else{printf("%d\n",x-1);}
return 0;
} 