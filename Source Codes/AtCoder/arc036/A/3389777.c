#include <stdio.h>
int main(void){
    int n,k;
    scanf("%d%d",&n,&k);
    int t[n];
    for (int i=0; i<n; i++){
        scanf("%d",&t[i]);
    }
    for (int i=2; i<n; i++){
        if (t[i-2]+t[i-1]+t[i]<k){
            printf("%d\n",i+1);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
} 