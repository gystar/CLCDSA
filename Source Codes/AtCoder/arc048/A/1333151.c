#include <stdio.h>
int main(void){
    int A,B;
    scanf("%d %d",&A,&B);
    if(A<0 && B>0){
        printf("%d\n",B-A-1);
        }
        else{
            printf("%d\n",B-A);
        }
        
    return 0;
} 