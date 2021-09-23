#include <stdio.h>
#include <stdlib.h>

int main(){
    int X,Y,Z;
    int count=0;
    scanf("%d%d%d", &X,&Y,&Z);
    for (int sum=Z; sum<=X; ) {
        count++;
        sum+=(Y+Z);
    }
    printf("%d",count-1);
    return 0;
} 