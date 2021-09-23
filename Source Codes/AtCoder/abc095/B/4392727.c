#include<stdio.h>

int main(void)
{
        int a, b, tmp, ans;
        int i, j;
        scanf("%d%d", &a, &b);
        int m[a];
        for(i=0;i<a;i++){
                scanf("%d", &m[i]);
        }

        for(i=0;i<a;i++){
                for(j=0;j<a;j++){
                        if(m[i]<m[j]){
                                tmp = m[i];
                                m[i] = m[j];
                                m[j] = tmp;
                        }
                }
        }
        tmp = 0;
        for(i=0;i<a;i++){
                tmp = tmp + m[i];
        }

        b = b - tmp;
        ans = (b / m[0]) + a;

        printf("%d\n", ans);
        return 0;
} 