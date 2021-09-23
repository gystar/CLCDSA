#include <stdio.h>

int p_judge(int x) {
    int i=2;
    while(x>=i*i) {
        if(x%i==0)
            return 0;
        i++;
    }
    return 1;
}

int main(void) {
    int n, x, cnt=0;
    scanf("%d", &n);

    for(x=11; cnt<n; x+=10) {
        if(p_judge(x)==1) {
            printf("%d ", x);
            cnt++;
        }
    }
    return 0;
} 