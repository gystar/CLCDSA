#include <stdio.h>
int main(void){
    int x,y,k;
    scanf("%d%d%d",&x,&y,&k);
    if (y>=k){
        printf("%d\n",x+k);
    } else {
        printf("%d\n",x+y-(k-y));
    }
    return 0;
} 