#include <stdio.h>
int main(void){
int a,b;
  scanf("%d %d",&a,&b);
  if((a+1)*b>=a*(b+1)){
  printf("%d\n",(a+1)*b);
    return 0;
  }
  else{
  printf("%d\n",a*(b+1));
  }
return 0;
} 