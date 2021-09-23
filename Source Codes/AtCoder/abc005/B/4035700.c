#include <stdio.h>
int main(){
    int n,t;
    scanf("%d",&n);
    scanf("%d",&t);
    int x=t;
    for (int i = 0; i < n-1; ++i)
    {
        scanf("%d",&t);
        if (x>=t)
        {
            x=t;
        }
    }
    printf("%d\n",x);
} 