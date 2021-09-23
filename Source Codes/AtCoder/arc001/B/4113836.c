#include<stdio.h>

int main(){
    int num, k, l, j,max=0,min=100;
    int count[4]={0};
    char moji[4]={'1','2','3','4'};
    char buff[101];

    scanf("%d",&num);
    scanf("%s",buff);
        for(k=0;k<num;k++){
        for(j=0;j<4;j++){
            if(buff[k]==moji[j]){
                count[j]++;
            }
        }
    }
    for(l=0;l<4;l++){
        if(min>count[l]){
            min = count[l];
        }
        if(max<count[l]){
            max = count[l];
        }
    }
    printf("%d %d\n",max,min);
    return 0;
} 