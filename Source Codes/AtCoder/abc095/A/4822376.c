#include <stdio.h>

int main(void){
    char s[4];
    scanf("%s", s);
    int ans = 0;
    for (int i = 0; i < 3; i++){
        if(s[i] == 'o') ans += 1;
    }
    printf("%d\n", ans * 100 + 700);
    return 0; 
} 