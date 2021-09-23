#include <stdio.h>
int main(void){
    int n,i;
    scanf("%d",&n);
    for(i=2;i<=n-1;i++){
        if(n%i==0){
            if(n%2!=0 && n%5!=0 && n%3!=0){
                printf("Prime\n");
                return 0;
            }
            else{
                printf("Not Prime\n");
                return 0;
            }
        }
    }
    if(n==1){
        printf("Not Prime\n");
        return 0;
    }
    printf("Prime\n");
    return 0;
} 