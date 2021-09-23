#include<stdio.h>
int main(){
    int a,b,tmp,c = 0;
    scanf("%d%d",&a,&b);
    tmp = a%b;
    if(tmp != 0){
        c = b-tmp;
    }
    printf("%d\n",c);
    return 0;
} 