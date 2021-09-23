#include <stdio.h>

int max(int a, int b){
    return (a > b) ? a : b;
}

int main(void){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int k;
    scanf("%d", &k);

    int m;
    for(int i = 0; i < k; i++){
        m = max(a, max(b, c));
        if (a == m) a *= 2;
        else if(b == m) b *= 2;
        else c *= 2;
    }
    printf("%d\n", a + b + c);
    
    return 0; 
} 