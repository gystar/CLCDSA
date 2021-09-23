#include<stdio.h>

int main(void)
{
        int n,m,c,r=0, re=0;
        int i, j;
        int nn[1000], mm[1000];

        scanf("%d%d%d", &n,&m,&c);

        for(i = 0; i < m; i++) {
                scanf("%d", &mm[i]);
        }
        for(i = 0; i < n; i++) {
                r = 0;
                for(j = 0; j < m; j++) {
                        scanf("%d", &nn[j]);
                        r += nn[j]*mm[j];
                }
                r += c;
                if(r > 0) {
                        re++;
                }
        }
        printf("%d",re);
        return 0;
} 