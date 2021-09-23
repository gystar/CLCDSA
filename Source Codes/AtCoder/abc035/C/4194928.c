#include <stdio.h>

int main()
{   int n,q;
    scanf("%d%d",&n,&q);
    int a[200001]={0},l[q],r[q];
    for(int i=0;i<q;i++){
        scanf("%d%d",&l[i],&r[i]);
    }
    for(int i=0;i<q;i++){
        a[l[i]-1]++;
        a[r[i]]--;
    }
    for(int i=1;i<n;i++){
        a[i]+=a[i-1];
    }
    for(int i=0;i<n;i++){
        printf("%d",a[i]%2);
    }
    printf("\n");
    return 0;
} 