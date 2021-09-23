#include<stdio.h>

int main(void){
    int s;
    int lineA[1000000] = {0};
    int idx = 0;
    int i;

    scanf("%d", &s);
    lineA[0] = s;

    while(1){
        idx++;
        if(lineA[idx-1] % 2 == 0){lineA[idx] = lineA[idx-1] / 2;}
        else{lineA[idx] = 3 * lineA[idx-1] + 1;}
    
        for(i = 0; i < idx; i++){
            if(lineA[i] == lineA[idx]){
                printf("%d\n", idx+1);
                return 0;
            }
        }

    }
} 