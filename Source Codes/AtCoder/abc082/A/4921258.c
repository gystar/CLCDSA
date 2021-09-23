#include<stdio.h>
int main(){
    int a,b,av,r,nt;
    scanf("%d %d",&a,&b);
    av=(a+b)/2;
    if((a+b)%2!=0){
        nt=av+1;
        printf("%d\n",nt);
    }
    else printf("%d\n",av);
    return 0;
} 