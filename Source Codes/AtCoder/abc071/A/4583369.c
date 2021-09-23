#include <stdlib.h>
#include <stdio.h>
int main(){
int x,a,b;
scanf("%d%d%d",&x,&a,&b);
if(abs(x-a)>abs(x-b)) printf("B");
else if(abs(x-b)>(x-a)) printf("A");


return 0;
} 