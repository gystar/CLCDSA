#include <stdio.h>
#include <math.h>
double getdis(int a, int b, int x, int y)
{ return sqrt((a-x)*(a-x)+(b-y)*(b-y)); }
int main(void)
{
    double txa, tya, txb, tyb, T, V, x, y; int n, flag = 0;
    scanf("%lf %lf %lf %lf %lf %lf", &txa, &tya, &txb, &tyb, &T, &V);
    scanf("%d", &n);
    double total = T * V;
    for(int i = 0; i < n; i++)
    {
        scanf("%lf %lf", &x, &y);
        double a = getdis(txa, tya, x, y); double b = getdis(txb, tyb, x, y);
        if(a + b <= total) { flag = 1; break; }
    }
    if(flag == 1) printf("YES\n");
    else printf("NO\n");
} 