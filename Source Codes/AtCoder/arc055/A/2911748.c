#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main(void){
    int n;
    scanf("%d",&n);
    printf("1");
    for (int i=0; i<n-1; i++){
        printf("0");
    }
    printf("7\n");
	return 0 ;
} 