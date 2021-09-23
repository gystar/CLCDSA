#include <stdio.h>
int main(void){
    char n[10];
    gets(n);
    if((n[0]==n[1] && n[1]==n[2]) || (n[1]==n[2] && n[2]==n[3]))
    {
        puts("Yes");
    }
    else
    {
        puts("No");
    }
    
    return 0;
} 