#include<stdio.h>
#include<string.h>

int main (void)
{
        int i, n, k;
        double m, x[100];
        char u[100][5];

        scanf("%d",&n);
        for(i=0;i<n;i++){
                scanf("%lf",&x[i]);
                scanf("%s",&u[i]);
        }
        k=0;
        for(i=0;i<n;i++){
                if(strcmp(u[i], "JPY")==0)
                        m=m+x[i];
                else if(strcmp(u[i], "BTC")==0)
                        m=m+x[i]*380000.0;
        }

        printf("%lf\n",m);
        return 0;
} 