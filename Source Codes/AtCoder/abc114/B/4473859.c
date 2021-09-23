#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<string.h>

int abs(int n){
    return n>0? n:-n;
}

int main(){
    char S[11];
    scanf("%s",S);
    int i,min=753,t;
    for(i=0;S[i+2]!='\0';i++){
        t = abs(-753 + 100*(S[i]-'0') + 10*(S[i+1]-'0') + (S[i+2]-'0') );
        min = t>min? min:t;
    }
    printf("%d",min);
    return 0;
} 