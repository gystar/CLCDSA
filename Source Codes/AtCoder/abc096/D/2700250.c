#include<stdio.h>
#include<math.h>

int ifso(int num);

int main()
{
    int n,i=11,j=0;
    scanf("%d",&n);
    while(j<n)
    {
        if(ifso(i))
        {
            printf("%d ",i);
            j++;
        }
        i+=10;
    }
}

int ifso(int num)
{
    int a,flag=1;
    for(a=2;a<=sqrt(num);a++)
    {
        if(num%a==0)flag=0;
    }
    return flag;
} 