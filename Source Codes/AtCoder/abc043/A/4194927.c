#include <stdio.h>

int main(void)
{
        int n;
        scanf("%d",&n);
        int i = 1,sum = 0;
        for(i;i <= n;i++)
                {
                        sum = sum + i;
                }
        printf("%d\n",sum);
        return 0;
} 