#include <stdio.h>
#include <stdlib.h>

int main(){
    int X,Y;
    scanf("%x%x",&X,&Y);
    
    
    if (X > Y) {
        printf(">");
    }else if(X < Y){
        printf("<");
    }else{
        printf("=");
    }
    return 0;
} 