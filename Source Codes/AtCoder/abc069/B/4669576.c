#include<stdio.h>

 


int main(void){
    char s[110];
    int a=0;
    scanf("%s",&s);
    
    for(int i=0;s[i]!='\0';i++){
        a++;
    }

    printf("%c%d%c",s[0],a-2,s[a-1]);

    return 0;


} 