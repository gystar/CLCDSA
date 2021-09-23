#include <stdio.h>
int main(void){
int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  for(;;){
  if(c%a==0&&c%b==0){printf("%d\n",c); break;}
    c++;
  }
  
return 0;
} 