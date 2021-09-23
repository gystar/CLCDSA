#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b, c;
    
    scanf("%d %d %d%*c", &a, &b, &c);
    
    if(a + b == c && a - b == c){
        printf("?\n");
    }else if(a + b == c){
        printf("+\n");
    }else if(a - b == c){
        printf("-\n");
    }else{
        printf("!\n");
    }
    
    return 0;
} 