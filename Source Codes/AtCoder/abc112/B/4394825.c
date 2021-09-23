#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, tl;
    scanf("%d%d",&n,&tl);
    int c[n], t[n];
    int min = 1001;
    for(int i=0; i<n; i++){
        scanf("%d%d",&c[i], &t[i]);
        if(t[i] <= tl && c[i] < min){
            min = c[i];
        }
    }
    if(min != 1001){
        printf("%d\n", min);
    }else{
        printf("TLE\n");
    }
    return 0;
} 