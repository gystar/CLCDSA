#include<stdio.h>
int n,srx[7],i;
float mzy,zjq;
int main() 
{
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {scanf("%f%f",&mzy,&zjq);
    if(mzy>=35)
    srx[1]++;
    if(mzy<35&&mzy>=30)
    srx[2]++;
    if(mzy<30&&mzy>=25)
    srx[3]++;
    if(zjq>=25)
    srx[4]++;
    if(mzy>=0&&zjq<0)
    srx[5]++;
    if(mzy<0)
    srx[6]++;}
    for(i=1;i<=5;i++)
    printf("%d ",srx[i]);
    printf("%d\n",srx[6]);
    return 0;
} 