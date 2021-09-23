#include "stdio.h"
int main()
{
    int n;
    scanf("%d",&n);
    int t;
    scanf("%d",&t);
    int array[n];
    int count=0;
    int min=1000000;
    for (int i = 0; i < n; i++)
    {
        int j,k;
        scanf("%d %d",&j,&k);
        if(k<=t){
            array[i]=j;
        }else{
            array[i]=10000000;
        }
        if(array[i]<min){
            min=array[i];
            count=j;
        }
    }

    if (count==0)
    {
        printf("TLE\n");
    }else{
        printf("%d\n",count);
    }
    return 0;
} 