#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int max = 1;
    int ans = 0;
    for(int i = 0;i<n;i++){
        scanf("%d",a+i);
        if(a[i]>max){
            ans = max;
            max = a[i];
        }
        else if(a[i]<max&&a[i]>=ans){
            ans = a[i];
        }
    }
    printf("%d\n",ans);
    return 0;
} 