#include <stdio.h>

int main(void) {
    int year, month, day;
    scanf("%d%*[-/]%d%*[-/]%d", &year, &month, &day);

    const int score = year * 10000
        + month * 100
        + day
        ;   

    printf(score <= 20190430 ? "Heisei" : "TBD");
    return 0;
} 