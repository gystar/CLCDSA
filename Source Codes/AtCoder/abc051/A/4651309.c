#include <stdio.h>
int main(void){
    char s[20],i;
    scanf("%s",s);
    for(i=0;i<19;i++){
        if(i==5 || i==13){
            printf(" ");
            continue;
        }
        printf("%c",s[i]);
    }
    printf("\n");
    return 0;
} 