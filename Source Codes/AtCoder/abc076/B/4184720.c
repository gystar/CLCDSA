#include <stdio.h>

int main(void){
        int N,K;
        int ans=1;
        scanf("%d", &N);
        scanf("%d", &K);
        for (int i = 0; i < N; i++) {
                if (K+ans>ans*2) {
                        ans *= 2;
                }else{
                        ans += K;
                }
        }
        printf("%d\n",ans);
        return 0;
} 