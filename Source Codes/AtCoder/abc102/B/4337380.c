#include <stdio.h>

int main(void)
{
        int n,a[100],min,max,i;

        scanf("%d",&n);

        for (i=0;i<n;i++){
                scanf("%d",&a[i]);
        }

        min=a[0];
        max=a[0];

        for (i=1;i<n;i++){
                if(min>a[i])
                        min=a[i];
                if (max<a[i])
                        max=a[i];
        }

        printf("%d\n",max-min);

        return 0;
} 