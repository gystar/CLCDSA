#include <stdio.h>
int main(void){
    // Your code here!
    int num[102],ans[102],i,n,k;
    scanf("%d",&n);
    for(i=0;i<2;i++)
        scanf("%d",&num[i]);
    scanf("%d",&k);
    for(i=0;i<k;i++)
        scanf("%d",&num[i+2]);
    for(i=0;i<102;i++)
        ans[i]=0;
    for(i=0;i<k+2;i++){
        if(ans[num[i]-1]==1)
            break;
        else
            ans[num[i]-1]++;
    }
    if(i==k+2)
        printf("YES\n");
    else
        printf("NO\n");
} 