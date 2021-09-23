#include <stdio.h>
int checkT(int xs, int ys, int mx, int my, int xe, int ye, double lim);
double getdist(int a, int b, int c, int d);
int square(int a);

int main(void)
{
    int xs, ys, xe, ye;
    scanf("%d%d%d%d", &xs, &ys, &xe, &ye);
    int t, v;
    scanf("%d%d", &t, &v);
    double lim = t * v;

    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int x, y;
        scanf("%d%d", &x, &y);
        if (checkT(xs, ys, x, y, xe, ye, lim))
        {
            puts("YES");
            return 0;
        }
    }
    puts("NO");
    return 0;
}

int checkT(int xs, int ys, int mx, int my, int xe, int ye, double lim)
{
    double dist = getdist(xs, ys, mx, my) + getdist(mx, my, xe, ye);
    if (dist <= lim)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

double getdist(int a, int b, int c, int d)
{
    int xdif = a - c;
    int ydif = b - d;
    double dist = sqrt(square(xdif) + square(ydif));
    return dist;
}

int square(int a)
{
    return a * a;
} 