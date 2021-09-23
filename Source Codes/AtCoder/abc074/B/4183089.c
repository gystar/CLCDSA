#include <stdio.h>
#include <string.h>
#include <math.h>
int abs(int i){
        return i>0 ? i : i * -1;
}
int min(int i,int j ){
        return i>j ? j : i;
}
int main(void){
        int N;
        int K;
        int ans = 0;
        scanf("%d", &N);
        scanf("%d", &K);
        int L[N];
        for (int i = 0; i < N; i++) {
                scanf("%d", &L[i]);
                ans +=  2 *  min(abs(L[i]-K),abs(L[i]-0));
        }
        printf("%d\n",ans);

        return 0;

} 