#include <stdio.h>
#include <stdlib.h>
int compare_int(const void *a, const void *b){
    return *(int *)a - *(int *)b;
}

int main(void){
    int N = 0;
    scanf("%d", &N);
    int d[100] = {0};
    for(int i = 0; i < N; i++){
        scanf("%d", &d[i]);
    }
    int height = 0; int max = 0;
    qsort(d, N, sizeof(int), compare_int);
    for(int i = 0; i < N; i++){
        if(max < d[i]){
            max = d[i];
            height++;
        }
    }
    printf("%d\n", height);
    return 0;
} 