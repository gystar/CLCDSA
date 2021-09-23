#include <stdio.h>
int main(void){
  int a,b,c,d;
  scanf("%d %d %d",&a,&b,&c);
  d=100*a+10*b+c;
    if(d%4==0){
    printf("YES");}
  else{printf("NO");}
return 0;
} 