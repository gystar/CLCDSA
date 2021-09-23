#include<stdio.h>
int main ()
{
    int y=1,i=1,j=1,k=0,m,n,x,z;
    scanf("%d%d",&m,&n);
    int a[210][210]={0};
    scanf("%d",&z);
    while(z--){
        scanf("%d",&x);
        while(x--){
            if(k<n&&a[j][k+1]==0){
                a[j][++k]=y;
            }
            else if(j<m&&a[j+1][k]==0){
                a[++j][k]=y;
            }
            else if(k>1&&a[j][k-1]==0){
                a[j][--k]=y;
            }
            else {
                a[--j][k]=y;
            }
        }
        y++;
    }
    j=1;k=1;
    for(i=1;i<=m*n;i++){
        if(i%n==0) {
            printf("%d ",a[j][k]);
            j++;
            k=1;
            printf("\n");
        }
        else printf("%d ",a[j][k++]);
    }
    return 0;
} 