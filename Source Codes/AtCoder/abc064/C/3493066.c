#include <stdio.h>
int main(void){
    int tmp[8] = {0};
    int b=0,cnt=0,max=0,i,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]  >= 3200){
            b++;
        }else{
            tmp[a[i]/400]++;
        }
    }
    for(i=0;i<8;i++){
        if(tmp[i] > 0){
            cnt++;
        }
    }
    max = cnt + b;
    if(cnt == 0){
        cnt++;
    }
    printf("%d %d",cnt,max);
} 