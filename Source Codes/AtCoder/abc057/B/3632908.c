#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    int N,M,tmp,ans,min=100000001;
    int a[51],b[51],c[51],d[51];
    scanf("%d%d",&N,&M);
    for(int i=0; i<N; i++) {
        scanf("%d%d",&a[i],&b[i]);
    }
    for(int i=0; i<M; i++) {
        scanf("%d%d",&c[i],&d[i]);
    }
    for(int i=0; i<N; i++) {
        min = 400000001;
        for(int j=0; j<M; j++) {
            tmp = abs(a[i]-c[j]) + abs(b[i]-d[j]);
            if(tmp<min) {
                min = tmp;
                ans = j + 1;
            }
        }
        printf("%d\n",ans);
    }
    return 0;    
} 