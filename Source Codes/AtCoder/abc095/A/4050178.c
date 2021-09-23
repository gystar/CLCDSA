#include <stdio.h>
#include <math.h>

int main(){
    char c;
    int a = 700;
    for(int i = 0; i < 3; ++i){
        scanf("%c", &c);
        if(c == 'o'){
            a += 100;
        }
    }
    printf("%d\n", a);
    return 0;
} 