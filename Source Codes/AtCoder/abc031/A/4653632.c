#include<stdio.h>
#include<string.h>
int main(){
    int attack,defence;
    scanf("%d%d",&attack,&defence);
    if(attack < defence)printf("%d\n",(attack+1)*defence);
    else if(attack > defence)printf("%d\n",attack*(defence+1));
    else printf("%d\n",(attack+1)*defence);
    return 0;
} 