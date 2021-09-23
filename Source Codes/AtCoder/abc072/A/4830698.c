#include<stdio.h>
int main(){
    int x,t;
    scanf("%d%d",&x,&t);
    int result = x-t;
    if(result<0)result=0;
    printf("%d\n",result);
} 