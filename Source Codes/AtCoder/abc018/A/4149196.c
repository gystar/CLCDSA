#include <stdio.h>

int main(void){
    int A,B,C,rank[3]={1,1,1},i;
    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&C);
    if(A<B) rank[0]++;
    else    rank[1]++;
    if(B<C) rank[1]++;
    else    rank[2]++;
    if(C<A) rank[2]++;
    else    rank[0]++;
    for(i=0;i<3;i++){
        printf("%d\n",rank[i]);
    }
    return 0;
} 