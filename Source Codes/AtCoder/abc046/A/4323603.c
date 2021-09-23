#include <stdio.h>
int main(void){
int a,b,c,count=3;
  scanf("%d %d %d",&a,&b,&c);
  if(a==b){count--;}
    if(a==c){count--;}
    if(b==c){count--;}
  if(count==0){count++;}
  printf("%d",count);
return 0;
} 