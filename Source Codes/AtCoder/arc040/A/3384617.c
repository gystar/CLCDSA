#include <stdio.h>
int main(void){
    int n,R=0,B=0;
    scanf("%d",&n);
    for (int i=0; i<n; i++){
        char s[n+1];
        scanf("%s",s);
        for (int j=0; j<n; j++){
            if (s[j]=='R'){
                R++;
            } else if (s[j]=='B'){
                B++;
            }
        }
    }
    if (B>R){
        printf("AOKI\n");
    } else if (B==R){
        printf("DRAW\n");
    } else {
        printf("TAKAHASHI\n"); 
    }
    return 0;
} 