#include <stdio.h>
#include<string.h>
int main(void){
    int i,a[5],sum=0;
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    if(a[0]+a[3]>a[1]+a[2])printf("%d\n",sum-a[1]-a[2]);
    else printf("%d\n",sum-a[0]-a[3]);
    return 0;
} 