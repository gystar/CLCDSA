#include<stdio.h>
int main(void){
    int i=0;
    char x,s[50];
    scanf("%c",&x);
    scanf("%s",s);
    while(s[i]){
        if(s[i]==x){
            i++;
            continue;
        }
        printf("%c",s[i]);
        i++;
    }
    putchar('\n');
    return 0;
} 