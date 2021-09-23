#include <stdio.h>

int main(void){
    int N,i;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        if(i*i>N){
            break;
        }
    }
    printf("%d\n",(i-1)*(i-1));
    return 0;
} 