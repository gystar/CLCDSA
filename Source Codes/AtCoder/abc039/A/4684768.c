#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int s = 0;
    s = a*b*2+a*c*2+b*c*2;
    printf("%d\n",s);
} 