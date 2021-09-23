#include <stdio.h>


int main(void){
    
    int N;
    char sex[100];
    scanf("%d",&N);
    scanf("%s",sex);
    int R=0;
    int G=0;
    int B=0;
    for(int i=0;i<N;i++){
        if(sex[i]=='R')R++;
        if(sex[i]=='G')G++;
        if(sex[i]=='B')B++;
    }
    printf("%d\n",R%2+G%2+B%2);
    return 0;
} 