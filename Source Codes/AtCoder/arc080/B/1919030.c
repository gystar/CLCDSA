#include<stdio.h>
int main()
{
    int H,W,n,i,x,t,j,p=0,v=1;
    scanf("%d %d",&H,&W);
    int a[H][W];
    int b[H*W];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        for(j=0;j<x;j++)
        {
            b[p]=v;
            p++;
        }
        v++;
    }
    p=0;
    printf("\n");
    for(i=0;i<H;i++){
    if(i%2!=1){
        for(j=0;j<W;j++)
        a[i][j]=b[p++];
    }
    else {  for(j=W-1;j>=0;j--)
        a[i][j]=b[p++];
    }}
    for(i=0;i<H;i++)
      {
        for(j=0;j<W;j++)
        printf("%d ",a[i][j]);
        printf("\n");}
    return 0;
} 