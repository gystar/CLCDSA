#include <stdio.h>
int main(){
int a,b;
char op;
scanf("%d %c%d",&a,&op,&b);
if (op=='+'){
printf("%d",a+b);
}
if (op=='-'){
printf("%d",a-b);
}
return 0;
} 