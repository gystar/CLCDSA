#include <stdio.h>

int main(){
    int R,G;
    int score;
    scanf("%d%d", &R,&G);
    score = 2 * G - R;
    printf("%d", score);
} 