#include <stdio.h>
int main(void){
    // Your code here!
    char s[13];
    scanf("%s",s);
    for(int i=0;s[i]!='\0';i++){
        if((i==0) && (s[i]>='a' && s[i]<='z'))
            s[i] -= 0x20;
        else if((i!=0) && (s[i]>='A' && s[i]<='Z'))
            s[i] +=0x20;
    }
    printf("%s\n",s);
} 