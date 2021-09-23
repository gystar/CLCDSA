#include<stdio.h>

int main(void){
    int N,T,count=0;
    scanf("%d",&N);
    scanf("%d",&T);
    int min = 1000;
    for (int i;i<N;i++){
        int t,c;
        scanf("%d",&c);
        scanf("%d",&t);
        if (t <= T && c < min){
            min = c;
        } else if (t > T)
        {
            count++;
        }
        
    }

    if (count == N){
        printf("TLE");
    } else {
        printf("%d",min);
    }
} 