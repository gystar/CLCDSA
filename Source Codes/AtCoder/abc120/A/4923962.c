#include <stdio.h>
int main(void){
    int A,B,C,R;
    
    scanf("%d %d %d",&A,&B,&C);
    
    R=B/A;
    
    if(R<C){
        printf("%d",R);
    }
    else{
        printf("%d",C);
    }
    return 0;
} 