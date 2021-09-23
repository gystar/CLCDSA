#include<stdio.h>
int vis[100005]={0};
int main()
{
    //int vis[100005]={0};
    int M=0,i=0,N=0;
    int a=0,b=0;
    scanf("%d",&N);
    scanf("%d",&M);
    while(i<M)
    {
        scanf("%d%d",&a,&b);
        vis[a]++;
        vis[b]++;
        i++;
    }
   for(i=0;i<=N;i++)
    {

    if(vis[i]%2!=0){
        printf("NO");
       break;
    }
    else if(i==N-1&&vis[N-1]%2==0)
    printf("YES");
    }

    return 0;
} 