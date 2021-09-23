#include <stdio.h>
int main(void){
    char x[2],s[51];
    int i=0;
    scanf("%s%s",x,s);
    while(s[i]!='\0'){
        if(s[i]!=x[0]) printf("%c",s[i]);
        i++;
    }
    printf("\n");
    return 0;
} 