#include <stdio.h>
int main(void){
    // Your code here!
    int a,b,c,k,s,t,g;
    scanf("%d%d%d%d%d%d",&a,&b,&c,&k,&s,&t);
    g = a*s+b*t;
    if(s+t>=k)
        g -= (s+t)*c;
    printf("%d\n",g);    
} 