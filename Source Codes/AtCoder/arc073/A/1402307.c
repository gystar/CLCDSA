#include<stdio.h>

int main(void) {
    int n,t;
    scanf("%d%d",&n,&t);
    int i;
    int x[n];
    int time = 0;
    for (i=0; i<n; i++) {
        scanf("%d",&x[i]);
    }
    for (i=0; i<n-1; i++) {
        if (x[i+1] - x[i] < t) {
            time += x[i+1] - x[i];
        } else {
            time += t;
        }
    }
    time += t;
    printf("%d\n", time);
    return 0;
} 