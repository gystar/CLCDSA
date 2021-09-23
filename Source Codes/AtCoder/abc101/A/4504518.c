#include <stdio.h>
//#include <string.h>

int main(){
    int a;
    char s[4];
    scanf("%s",&s);
    for(int i=0;i<4;i++){
        if(s[i]=='+'){
            a++;
        }else{
            a--;
        }
    }
    printf("%d",a);
    return 0;
} 