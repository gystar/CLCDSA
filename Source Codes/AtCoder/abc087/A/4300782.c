#include <stdio.h>
int main(void){
int x,a,b,count;
  scanf("%d %d %d",&x,&a,&b);
  x=x-a;
  for(;;){
    x=x-b;
  if(x<0){break;}
  count++;
}
printf("%d",x+b);
return 0;
} 