#include <stdio.h>
int main(void){
int a,b,c,k,s,t;
  scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&k);
    scanf("%d",&s);
    scanf("%d",&t);
  if(s+t>=k){printf("%d\n",((a*s)+(b*t)-(s+t)*c));}
  else{printf("%d\n",a*s+b*t);}
  
return 0;
} 