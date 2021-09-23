#include<stdio.h>
int main()
{
    char s[22];
    scanf("%s", s);
    char k[50] = { "WBWBWWBWBWBWWBWBWWBWBWBWWBWBWWBWBWBW" };
    int z;
    int i;
    for (i = 0; i < 20; i++)
    {
        z = 0;
        for (int j = 0; j < 20; j++)
        {
            if (s[j] != k[i + j])
            {
                z = 1;
                break;
            }
        }
        if (z == 0)
            break;
    }
    switch (i)
    {
    case 0:
        printf("Do");
        break;
    case 2:
        printf("Re");
        break;
    case 4:
        printf("Mi");
        break;
    case 5:
        printf("Fa");
        break;
    case 7:
        printf("So");
        break;
    case 9:
        printf("La");
        break;
    case 11:
        printf("Si");
        break;
    default:
        return 0;
    }
    printf("\n");
    return 0;
} 