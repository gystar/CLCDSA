#include<stdio.h>
int main(void){
    char A[255],B[255],C[255];
    int count,a,b,c;

    scanf("%s %s %s",A,B,C);

    for(count=0;A[count]!='\0';count++){
        a=count;
    }
    for(count=0;B[count]!='\0';count++){
        b=count;
    }
    
    if(A[a]==B[0] && B[b]==C[0]){
        printf("YES\n");
    }else{
        printf("NO\n");
    }

    return 0;
} 