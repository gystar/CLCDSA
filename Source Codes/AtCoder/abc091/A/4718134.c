#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a, b, c;
    scanf("%d%d%d%d", &a, &b, &c);
    if(a+b < c){
        printf("No\n");
    }else{
        printf("Yes\n");
    }
    return 0;
} 