#include <stdio.h>

int main(void) {
    int N,tmp,count=10000;
    
    scanf("%d",&N);
    for(int i = 0; i<=N;i++) {

        tmp = 0;
        int j = i;
        int k = N-j;

        while(j>=1) {
            tmp =tmp + j%6;
            j = j/6;
        }

        while(k>=1) {
            tmp = tmp + k%9;
            k = k/9;
        }
        if(count>tmp) {
            count = tmp;
        }
    }

    printf("%d\n",count);
    

    
} 