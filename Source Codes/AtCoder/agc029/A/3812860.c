#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
int main()
{   long long i,n,cnt=0,ans=0;
    char s[200002];
    scanf("%s",s);
    int a[200002];
    n=strlen(s);
    for(i=0;i<n;i++){
        if(s[i]=='B'){
            a[i]=0;
            cnt++;
        }else{
            a[i]=1;
            ans+=cnt;
        }
    }
    printf("%lld",ans);

    return 0;
} 