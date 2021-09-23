#include <stdio.h>
int main(void)
{
    int n, h[100], i, ans=0, p, cnt=0;

    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &h[i]);
    }

    while(1){
        p=0;cnt=0;
        for(i=0;i<n;i++){
            if(h[i] != 0){
                p=1;
                h[i]=h[i]-1;
            }
            else if(h[i]==0 && p==1){
                break;
            }
        }
        if(p==1) ans++;
        for(i=0;i<n;i++){
            if(h[i]==0) cnt++;
        }
        if(cnt==n) break;
    }
            
                
    printf("%d\n", ans);          

    return 0;
} 