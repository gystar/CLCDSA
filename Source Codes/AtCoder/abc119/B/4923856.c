#include<stdio.h>

#define BTC2YEN 380000.0

int main(void)
{
    int n;
    scanf("%d",&n);

    int i;
    double yen = 0.0;
    for(i=0;i<n;i++){
        double money;
        char type[3];
        scanf("%lf%s", &money, &type);
        if (type[0] == 'B')
            yen += money * BTC2YEN;
        else
            yen += money;
    }

    printf("%lf", yen);
    return 0;
} 