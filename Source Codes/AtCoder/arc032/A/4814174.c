#include <stdio.h>
int main(void){
    int n,m,i;
    scanf("%d",&n);
    if(n==1){
        printf("BOWWOW\n");
        return 0;
    }
    m=n;
    for(i=1;i<m;i++){
        n+=i;
    }
    for(i=2;i<n;i++){
        if(n%i==0){
            printf("BOWWOW\n");
            return 0;
        }
    }
    printf("WANWAN\n");
    return 0;
} 