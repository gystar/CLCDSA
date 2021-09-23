#include <stdio.h>
int main(){
    int pass;
    scanf("%d",&pass);
    if(pass/1000 == pass/100%10 && pass/100%10 == pass/10%10 && pass/10%10 == pass%10)printf("SAME\n");
    else printf("DIFFERENT\n");
} 