#include <stdio.h>
int main(){
    int N, Q;
    scanf("%d%d", &N, &Q);
    char S[N];
    int l[100000], r[100000], i;
    int A[100001]={0};
    scanf("%s", S);
    for(i=0;i<Q;i++){
        scanf("%d%d", &l[i], &r[i]);
    }
    for(i=0;i<N;i++){
        if( S[i-1]=='A' && S[i]=='C' ){
            A[i]++;
        }
        A[i] = A[i] + A[i-1];
    }
    for(i=0;i<Q;i++){
        printf("%d\n",A[ r[i]-1 ] - A[ l[i]-1 ]);
    }
    return 0;
} 