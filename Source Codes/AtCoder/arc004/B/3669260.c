#include <stdio.h>
int main(void){
    int n,max=0,min=0;
    scanf("%d",&n);
    int d[n];
    for (int i=0; i<n; i++){
        scanf("%d",&d[i]);
        max+=d[i];
    }
    for (int i=0; i<n; i++){
        min=d[i]>(max-d[i])?(d[i]*2-max):min;
    }
    printf("%d\n%d\n",max,min);
    return 0;
} 