#include <stdio.h>

int main(){
    
    int r;
    scanf("%d",&r);
    if(r < 1200 ){
        printf("ABC\n");
    }else if(r >= 2800){
        printf("AGC\n");
    }else{
        printf("ARC\n");
    }
    return 0;
} 