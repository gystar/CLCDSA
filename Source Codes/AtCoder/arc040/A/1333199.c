#include <stdio.h>
#include <string.h>
int main(void){
    int N,i,j,r=0,b=0;
    char S[110][110];
    scanf("%d ",&N);
    for(i=0;i<N;i++){
        scanf("%s",S[i]);
        }
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
        if(S[i][j] == 'R'){r++;}
        if(S[i][j] == 'B'){b++;}
        }
    }
    if(r>b){printf("TAKAHASHI\n");}
    else if(r<b){printf("AOKI\n");}
    else{printf("DRAW\n");}
    return 0;
} 