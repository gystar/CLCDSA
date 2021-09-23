#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main(void){
    int n,a,b;
    scanf("%d%d%d",&n,&a,&b);
    if ((b-a)%2==0){
        printf("Alice\n");
    } else {
        printf("Borys\n");
    }
	return 0 ;
} 