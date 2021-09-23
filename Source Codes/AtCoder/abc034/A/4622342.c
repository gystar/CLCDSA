#include <stdio.h>
int main(){
int a,b;
scanf("%d%d",&a,&b);

if(a>b) puts("Worse");
else if(b>a) puts("Better");

return 0;
} 