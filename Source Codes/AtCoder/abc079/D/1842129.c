#include <stdio.h>
int main(void){
    int H,W;
    int A;
    int i, j, k;
    int c[10][10];
    int MP = 0;
    
    scanf("%d %d", &H, &W);
    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 10; j++)
        {
            scanf("%d", &c[i][j]);
        }
    }
    
    for(k = 0; k < 10; k++)
    {
        for(i = 0; i < 10; i++)
        {
            for(j = 0; j < 10; j++)
            {
                if(c[i][j] > c[i][k] + c[k][j])
                {
                    c[i][j] = c[i][k] + c[k][j];
                }
            }
        }
    }
    
    for(i = 0; i < (H * W); i++)
    {
        scanf("%d", &A);
        if(A >= 0)
        {
            MP += c[A][1];
        }
    }
    
    printf("%d\n", MP);
    
    return 0;
} 