#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int store;
    for (int i=n-1;i>0;i--){
        for (int j=0;j<i;j++){
            if (a[j]<a[j+1]){
                store=a[j];
                a[j]=a[j+1];
                a[j+1]=store;
            }
        }
    }
    int sum=0;
    for (int i=0;i<n;i+=2){
        sum+=a[i];
    }
    for (int i=1;i<n;i+=2){
        sum-=a[i];
    }
    printf("%d",sum);
    return 0;
} 