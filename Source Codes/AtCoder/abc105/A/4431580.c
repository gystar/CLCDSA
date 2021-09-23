#include<stdio.h>

int main(void){
    int n,k;
    scanf("%d %d\n",&n,&k);
    if(n%k==0){
        printf("%d\n",0);
    }
    else{
        printf("%d\n",1);
    }

} 