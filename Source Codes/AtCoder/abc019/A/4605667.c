#include <stdio.h>
int main(void){
int a,b,c;
  int max;
  int min;
  scanf("%d %d %d",&a,&b,&c);
  max=a;
  min=a;
  if(max<=b){max=b;}
  if(max<=c){max=c;}
  if(min>=b){min=b;}
  if(min>=c){min=c;}
  
  if(max==a&&min==b){printf("%d\n",c); return 0;}
  if(max==b&&min==a){printf("%d\n",c); return 0;}
    if(max==a&&min==c){printf("%d\n",b); return 0;}
  if(max==c&&min==a){printf("%d\n",b); return 0;}
    if(max==b&&min==c){printf("%d\n",a); return 0;}
  if(max==c&&min==b){printf("%d\n",a); return 0;}
  
  
if(a==b&&b==c){printf("%d\n",a); return 0;}
  
  
  
return 0;
} 