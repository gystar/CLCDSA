#include <stdio.h>

int main(){
    int n,k,x,y,sum=0;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    for (int i=0; i<n; i++) {
        if (i<k) {
            sum+=x;
        }else{
            sum+=y;
        }
    }
    printf("%d\n",sum);
} 