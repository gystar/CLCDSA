#include<stdio.h>

int main(void){
    int length[10];
    int num;
    int maxNum = 0;
    int maxIdx;
    int sumNums = 0;
    int i;

    scanf("%d", &num);
    for(i = 0; i < num; i++){
        scanf("%d", &length[i]);
        sumNums += length[i];
    }

    for(i = 0; i < num; i++){
        if(length[i] > maxNum){
            maxNum = length[i];
            maxIdx = i;
        }
    }

    if(length[maxIdx] < sumNums - length[maxIdx]){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
} 