#include<stdio.h>

int main(){
    int n, i, min=100;
    int buff[100];

    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&buff[i]);
        if(min > buff[i]){
            min = buff[i];
        }
    }
    printf("%d\n",min);
    return 0;
} 