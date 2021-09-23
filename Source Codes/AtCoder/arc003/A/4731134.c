#include <stdio.h>
int main(void){
    int n,i;
    double gpa=0;
    char s[101];
    scanf("%d%s",&n,s);
    for(i=0;i<n;i++){
        if(s[i]=='A') gpa+=4;
        if(s[i]=='B') gpa+=3;
        if(s[i]=='C') gpa+=2;
        if(s[i]=='D') gpa+=1;
    }
    printf("%.20f\n",(gpa/n));
    return 0;
} 