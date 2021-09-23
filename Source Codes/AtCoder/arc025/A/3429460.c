#include <stdio.h>
int main(void){
    int d[7],j,ans=0;
    for (int i=0; i<7; i++){
        scanf("%d",&d[i]);
    }
    for (int i=0; i<7; i++){
        scanf("%d",&j);
        if (d[i]>j){
            ans+=d[i];
        } else {
            ans+=j;
        }
    }
    printf("%d\n",ans);
    return 0;
} 