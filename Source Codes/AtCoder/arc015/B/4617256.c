#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    double maxt, mint;
    int mousho, manatsu, natsu, nettaiya, fuyu, mafuyu;
    mousho = manatsu = natsu = nettaiya = fuyu = mafuyu = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%lf %lf", &maxt, &mint);
        if (maxt >= 35)mousho++;
        else if (maxt >= 30)manatsu++;
        else if (maxt >= 25)natsu++;
        if (mint >= 25)nettaiya++;
        if (mint < 0 && maxt >= 0)fuyu++;
        if (maxt < 0)mafuyu++;
    }
    printf("%d %d %d %d %d %d\n", mousho, manatsu, natsu, nettaiya, fuyu, mafuyu);
    return 0;
} 