#include<stdio.h>
int n,a[10001],i,count;
int main(void){
    scanf("%d",&n);
    for(i = 0;i < n;i++){
        scanf("%d",&a[i]);
    }
    for(i = 0;i < n;i++){
        while(a[i]%2 == 0){
            a[i]/=2;
            count += 1;
        }
    }
    printf("%d",count);
    return 0;
        

} 