#include<stdio.h>

int main(){
    char s[20];
    int i;

    scanf("%s",s);

    for(i=0;s[i]!='\0';i++){
        if(s[i]==','){
            s[i] = ' ';
        }
    }
    printf("%s",s);
    return 0;
} 