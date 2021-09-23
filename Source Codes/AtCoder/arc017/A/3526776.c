#include<stdio.h>
int main()
{
    int k,i=2;
    scanf("%d",&k);
    for(i=2;i<k;i++)
    {
        if(k%i==0) break;
        else continue;
    }
    if(i==k)
        printf("YES\n");
    if(i!=k)
        printf("NO\n");
        return 0;
} 