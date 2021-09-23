#include <stdio.h>
int main(void){
int a,b,sum,time,minus;
  scanf("%d %d",&a,&b);
  sum=a+b;
  time=a*b;
  minus=a-b;
  if(sum>=time&&sum>=minus){printf("%d",sum); return 0;}
   if(time>=sum&&time>=minus){printf("%d",time);return 0;}
   if(minus>=time&&minus>=sum){printf("%d",minus);return 0;}
  
return 0;} 