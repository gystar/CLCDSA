#include <stdio.h>
int main(){
int a,b;
scanf("%d%d",&a,&b);
if(a%16==0&&b%9==0) printf("16:9\n");
else if(a%4==0&&b%3==0) printf("4:3\n");


return 0;
} 