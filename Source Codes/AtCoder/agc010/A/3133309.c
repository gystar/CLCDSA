#include <stdio.h>
int main(void){
    // Your code here!
    int i, N, cnt = 0;
    long int a[100001];
    
    scanf("%d", &N);
    
    for(i = 0; i < N; i++){
        scanf("%d", &a[i]);
        if(a[i] % 2 != 0) cnt++;
    }
    
    if(cnt % 2 == 0) printf("YES");
    else printf("NO");
    
    return 0;
} 