#include <stdio.h>
#include <string.h>
int main(void){
    int i;
    char o[51],e[51];
    scanf("%s%s",o,e);
    for(i=0;i<strlen(o)+strlen(e);i++){
        if(i%2==0) printf("%c",o[i/2]);
        else printf("%c",e[i/2]);
    }
    printf("\n");
    return 0;
} 