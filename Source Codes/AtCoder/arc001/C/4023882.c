#include <stdio.h>

int dif(int a, int b){
    return a > b ? a - b : b - a;
}

int main(){
    int a, b;
    int count = 0, d;
    
    scanf("%d %d", &a, &b);
    
    d = dif(a, b);
    
    if (d >= 10) {
        count += d / 10;
        d %= 10;
    }
    if (d >= 8) {
        count += 1 + 10 - d;
    }else if(d >= 3){
        count += 1 + dif(5, d);
    }else{
        count += d;
    }
    
    printf("%d\n", count);
} 