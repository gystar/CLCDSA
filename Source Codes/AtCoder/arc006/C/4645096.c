#include <stdio.h>
#include <stdlib.h>
//??????????????????
int main()
{
   int n,i,a,k,count=0;
   scanf("%d",&n);
   int top[n];
   for(i=0;i<n;i++)
   {
       top[i]=0;
   }
   for(i=0;i<n;i++)
   {
       scanf("%d",&a);
       for(k=0;k<n;k++)
       {
           if(a<=top[k])
           {
               top[k]=a;
               break;
           }
           if(top[k]==0)
           {
               top[k]=a;
               count++;
               break;
           }
       }
   }

  printf("%d\n",count);
    return 0;
} 