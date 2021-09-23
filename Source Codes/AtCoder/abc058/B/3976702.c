#include <stdio.h>
#include <string.h>
int main()
{
    char o[51],e[51];
    scanf("%s%s",o,e);
    for(int i=0;i<strlen(o);i++){
        if(e[i]!='\0'){
        printf("%c%c",o[i],e[i]);
        }else{
            printf("%c",o[i]);
        }
    }
    return 0;
} 