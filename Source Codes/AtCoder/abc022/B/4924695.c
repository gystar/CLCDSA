#include <stdio.h>
int main(void){
    int n, i, j, cnt = 0;
    int a[100001] = {};
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &j);
        a[j]++;
        if(a[j]>1) cnt++;
    }
    printf("%d\n", cnt);

    return 0;
} 