#include <stdio.h>

int main(){
    int N;
    int heho;
    scanf("%d",&N);
    
    for (int i=1; i<=1000000000; i++) {
        heho = i*i;
        if (N < heho) {
            printf("%d", (i - 1)*(i-1));
            break;
        }
    }
    return 0;
} 