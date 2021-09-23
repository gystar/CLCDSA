#include <stdio.h>
int main(void){
 int a,b;
 scanf("%d%d",&a,&b);
 if(a<=0&&b>=0) puts("Zero");
 else if(a>0 || (b-a)%2==1) puts("Positive");
 else puts("Negative");
 return 0;
} 