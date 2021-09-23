#include <stdio.h>
    int main(void){
    int C,c;
    scanf("%c %c",&C,&c);
    puts(C-'A'+'a'==c?"Yes":"No");
    return 0;
    } 