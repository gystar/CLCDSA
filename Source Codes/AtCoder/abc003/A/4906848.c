#include<stdio.h>
    #include<string.h>
    int main(void){
    int A,B;
    scanf("%d",&A);
    for(int i=1;i<=A;i++){
        B+=i;
    }
      B=B*10000;
    printf("%d\n",B/A);
    
    return 0;
    } 