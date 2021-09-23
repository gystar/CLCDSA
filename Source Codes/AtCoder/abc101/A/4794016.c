#include <stdio.h>

int main(void){
    int n = 0;
    char s[5];
    scanf("%s", s);
    for(int i = 0; i < 4; i++){
        if(s[i] == '+'){n += 1;}
        else if(s[i] == '-'){n -= 1;}
    }
    printf("%d\n", n);
    return 0; 
} 