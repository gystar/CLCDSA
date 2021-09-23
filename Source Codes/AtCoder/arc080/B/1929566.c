#include<stdio.h>
int main(void)
{
    int H,W,s[100][100]={0},p[20000],N,i,j,m=0,n=0;
    scanf("%d %d",&H,&W);
    scanf("%d",&N);
    for(i=1;i<=N;i++)
        scanf("%d",&p[i]);
    for(i=1;i<=N;i++)
    {
        for(j=1;j<=p[i];j++)
        {
            if(n<W-1&&n>=0&&s[m][n+1]==0) {s[m][n]=i;n++;}
            else if(n==W-1&&s[m][n-1]!=0) {s[m][n]=i;m++;}
            else if(n<=W-1&&n>0&&s[m][n-1]==0) {s[m][n]=i;n--;}
            else if(n==0&&s[m][n+1]!=0) {s[m][n]=i;m++;}
            else if(W==1) {s[m][n]=i;m++;}
        }
    }
    for(m=0;m<H;m++)
    {
        for(n=0;n<W;n++)
            if(n==W-1) printf("%d\n",s[m][n]);
            else printf("%d ",s[m][n]);
    }
    return 0;

} 