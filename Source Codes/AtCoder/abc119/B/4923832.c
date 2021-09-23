#include<stdio.h>

int main(void)
{
        int n, i;
        double x, r=0;
        char v[4];

        scanf("%d", &n);

        for(i = 0; i < n; i++) {
                scanf("%lf%s", &x,&v);
                if(strcmp(v ,"JPY") == 0) {
                        r += x;
                } else {
                        r += x*380000;
                }
        }
        printf("%lf",r);
        return 0;
} 