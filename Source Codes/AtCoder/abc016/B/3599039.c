#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);

    if(A-B==A+B && A-B==C) printf("?\n");
    else if(A+B==C) printf("+\n");
    else if(A-B==C) printf("-\n");
    else printf("!\n");
} 