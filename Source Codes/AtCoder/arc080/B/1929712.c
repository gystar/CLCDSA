#include<stdio.h>
int main(void)
{
    int h/*row*/,w/*column*/,n/*number of colors*/;

    scanf("%d %d %d",&h,&w,&n);

    int i,j,k,a[n],sq[h][w];

    for(i=0,j=0;i<n;i++){
        scanf("%d",&a[i]);
        for(k=0;k<a[i];k++,j++)
            if((j/w)%2)
                sq[j/w][j%w]=i+1;
            else
                sq[j/w][w-1-j%w]=i+1;
    }

    for(j=0;j<h;j++){
        for(k=0;k<w;k++)
            printf("%d ",sq[j][k]);
        printf("\n");
    }

    return 0;
} 