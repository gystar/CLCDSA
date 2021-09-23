#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<string.h>

int main(){
    int R;
    scanf("%d",&R);
    if(2800<=R) printf("AGC");
    else if(1200<=R) printf("ARC");
    else printf("ABC");
    return 0;
} 