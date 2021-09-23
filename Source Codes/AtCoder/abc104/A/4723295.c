#include <stdio.h>

int main(void){
    int R;
    scanf("%d", &R);
    if(R < 1200){
        printf("%s\n", "ABC");
    }
    else if(R < 2800){
        printf("%s\n", "ARC");
    }
    else printf("%s\n", "AGC");
    return 0; 
} 