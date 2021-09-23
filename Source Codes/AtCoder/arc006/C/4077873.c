#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a,b[100]={0},num;
    int i,j,k,p,q,sum=0;

    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&a);
        for(k=0;k<num;k++)
        {
            if(b[k]>=a || b[k]==0)
            {
                b[k]=a;
                break;
            }
            /*if(b[k]==0)
            {
               b[k]=a;
               k++;
               break;
            }*/
        }
    }
    for(p=0;p<num;p++)
    {
        if(b[p]!=0)
        {
            sum++;
        }

    }
    printf("%d\n",sum);
    return 0;
} 