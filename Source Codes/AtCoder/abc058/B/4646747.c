#include<stdio.h>

int main(){
    int lenO, lenE;
    char o[50], e[50], pas[100];
    scanf("%s", o);
    scanf("%s", e);

    for(lenO=0; o[lenO]!='\0'; lenO++);
    for(lenE=0; o[lenE]!='\0'; lenE++);

    for(int i=0; i<lenO+lenE; i++){
        if(i%2 == 0){
            if(o[i/2] !='\0') pas[i] = o[i/2];
            else pas[i] = e[i/2];
        }
        else pas[i] = e[i/2];
    }
    pas[lenO+lenE] = '\0';

    printf("%s",pas);
    return 0;
} 