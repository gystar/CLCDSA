#include <stdio.h>
#include <math.h>

int main(void)
{
    int xa, ya, xb, yb, T, V;
    int n;
    int x, y;
    int i;
    unsigned char flag = 0; //1:YES, 0:NO
    
    scanf("%d %d %d %d %d %d%*c", &xa, &ya, &xb, &yb, &T, &V);
    scanf("%d%*c", &n);
    for(i = 0; i < n; i++){
        scanf("%d %d%*c", &x, &y);
        if(sqrt((x - xa) * (x - xa) + (y - ya) * (y - ya)) + sqrt((xb - x) * (xb - x) + (yb - y) * (yb - y)) <= T * V * 1.0){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    
    return 0;
} 