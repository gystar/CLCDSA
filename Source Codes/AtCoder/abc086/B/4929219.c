#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main(){
    double num;
    char a[201], b[101];
    scanf("%s %s", a, b);
    strcat(a, b);
    num = atoi(a);
    puts(num==pow((int)pow(num, 0.5), 2) ? "Yes" : "No");
    return 0;
} 