#include <stdio.h>

int main(){
    int total;
    int count;
    int N;
    scanf("%d\n",&N);

    for(int i=0;i<N;i++){
        count=10000*(i+1);
        total=count+total;
    }
    total=total/N;
    printf("%d\n",total);
    return 0;
} 