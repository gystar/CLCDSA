#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int a[n];
    int kari;
    for(int i=0;i<n;i++){
        scanf("%d",&kari);
        if(n%2==0){
            if(i%2==0)a[n/2+i/2]=kari;
            if(i%2==1)a[n/2-(i+1)/2]=kari;
        }
        if(n%2==1){
            if(i%2==0)a[(n-1)/2-i/2]=kari;
            if(i%2==1)a[(n-1)/2+(i+1)/2]=kari;
        }
    }
    for(int i=0;i<n;i++)printf("%d ",a[i]);
    return 0;
} 