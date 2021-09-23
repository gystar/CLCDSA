#include <stdio.h>
 
 
 
int main(void){
    int N,M,A,B;
    scanf("%d %d %d %d",&N,&M,&A,&B);
    
    for(int i=0;i<M;i++){
        if(N<=A)N+=B;
        int c;
        scanf("%d",&c);
        N-=c;
        if(N<0){printf("%d\n",i+1);return 0;}
    }
    printf("complete\n");
    return 0;
} 