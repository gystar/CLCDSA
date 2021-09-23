#include<stdio.h>

int main(){
    int n, i, j, k, work,sum=0;
    int kushi[200]={};

    scanf("%d",&n);

    

    for(i=0;i<n*2;i++){
        scanf("%d",&kushi[i]);
    }

    for(i=0;i<n*2;i++){
        for(j=i+1;j<n*2;j++){
            if(kushi[i]<kushi[j]){
               work = kushi[i];
               kushi[i] = kushi[j];
               kushi[j] = work; 
            }
        }
    }

    for(k=1;k<n*2;k+=2){
        sum += kushi[k];
    }

    printf("%d",sum);

    return 0;
} 