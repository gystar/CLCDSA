#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,cnt=1,z;
    scanf("%d",&n);
    int t[n+1],x[n+1],y[n+1];
    t[0]=0;x[0]=0;y[0]=0;
    for(i=1;i<n+1;i++)
        scanf("%d%d%d",&t[i],&x[i],&y[i]);
    for(i=1;i<n+1;i++)
    {
        z=abs(x[i]-x[i-1])+abs(y[i]-y[i-1]);
        if(z>(t[i]-t[i-1]))
        {
            cnt=0;break;
        }
        else
        {
            if((t[i]-t[i-1])>z)
            {
                if((z%2!=(t[i]-t[i-1])%2))
                {
                    cnt=0;break;
                }
            }
        }
    }
    if(cnt)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
} 