#include <stdio.h>
int main(void){
    int y,tf;
    scanf("%d",&y);
    tf=(y%4==0)+(y%100==0)+(y%400==0);
    printf("%s\n",tf%2?"YES":"NO");
    return 0;
} 