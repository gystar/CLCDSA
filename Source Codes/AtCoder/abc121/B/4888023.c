#include <stdio.h>
int main(void){
    int N,M,C,An,To=0;
    scanf("%d%d%d",&N,&M,&C);
    int B[M],A[N][M];
    for(int i=0;i<M;i++)scanf("%d",&B[i]);
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++)scanf("%d",&A[i][j]);
    }
    for(int i=0;i<N;i++){
        An=0;
        for(int j=0;j<M;j++)An+=B[j]*A[i][j];
        if(An+C>0)To++;
    }
    printf("%d\n",To);
    return 0;
} 