#include <stdio.h>
int main(void){
int a,b;
char d;
scanf("%d %c %d",&a,&d,&b);
if(d=='+'){printf("%d\n",a+b);}
else{printf("%d\n",a-b);}
return 0;
} 