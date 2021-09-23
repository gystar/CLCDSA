#include<stdio.h>
int main(void)
{
   int h,w,n,ain[10000]={0},i1,i2,aout[100][100]={0},x=0,y=0;
   scanf("%d",&h);
   scanf("%d",&w);
   scanf("%d",&n);
   for(i1=0;i1<n;i1++){
      scanf("%d",&ain[i1]);
      for(i2=0;i2<ain[i1];i2++){
        if(x>=w) {y++;x--;}
        else if(x<0) {y++;x++;}
        {if(y%2) aout[y][x--]=i1+1;
         else aout[y][x++]=i1+1;
        }
      }
    }
    for(i1=0,i2=0;i1<h;i1++){
        for(i2=0;i2<w;i2++)
            printf("%d ",aout[i1][i2]);
        printf("\n");}
    return 0;
} 