# include <stdio.h>

int main(){
    int R;

    scanf("%d", &R);

    if (R >= 2800)
        printf("AGC");
    else if (R >= 1200)
        printf("ARC");
    else
        printf("ABC");

    return 0;
} 