#include<stdio.h>
int main()
{
    int c[501],s[501],f[501];
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<n;i++){
        scanf("%d%d%d",&c[i],&s[i],&f[i]);
    }
    for(i=1;i<=n;i++){
        int x=0;
        for(j=i;j<n;j++){
            if(x<s[j])
                x=s[j];
            if(x%f[j]!=0)
                x=x+f[j]-x%f[j];
            x+=c[j];
        }
        printf("%d\n",x);
    }
} 