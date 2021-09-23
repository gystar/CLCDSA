#include <stdio.h>

int main(int argc, char const *argv[]) {
    // ??
    int time;
    // ??
    scanf("%d", &time);
    // ??
    int hour, minutes, sec;
    hour = time/3600;
    time = time%3600;
    minutes = time/60;
    time = time%60;
    sec = time;
    // ??
    printf("%02d:%02d:%02d\n", hour, minutes, sec);
    return 0;
} 