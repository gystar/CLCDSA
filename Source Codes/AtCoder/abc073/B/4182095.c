#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void){
        int N;
        int x;
        int y;
        int ans = 0;
        scanf("%d", &N);
        for (int i = 0; i < N; i++) {
                scanf("%d %d", &x,&y);
                ans += y - x + 1 ;
        }
        printf("%d\n", ans);
        return 0;
} 