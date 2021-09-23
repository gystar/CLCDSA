#include <stdio.h>

int main(){
    int N, T, c, t, min = 1001, ans;
    scanf("%d%d", &N, &T);
    for(int i = 0; i < N; i++){
        scanf("%d%d", &c, &t);
        if(c < min && t <= T){
            ans = c;
            min = c;
        }
    }
    if(min == 1001) printf("TLE");
    else printf("%d", ans);
    return 0;
} 