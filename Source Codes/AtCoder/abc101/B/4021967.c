#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    if(N/10==0){
        printf("Yes\n");
    } else{
        int D = N;
        int S = 0;
        while(D!=0){
            S+=D%10;
            D/=10;
        }
        if(N%S==0){
            printf("Yes\n");
        } else{
            printf("No\n");
        }
    }
    return 0;
} 