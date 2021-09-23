#include<stdio.h>

 


int main(void){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n/2;i++){
        for(int j=0;j<n/2;j++){
            if(n==4*i+7*j){
                printf("Yes");
                return 0;
            }
        }
    }

    printf("No");
    return 0;

} 