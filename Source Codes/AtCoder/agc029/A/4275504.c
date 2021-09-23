#include <stdio.h>

int main () {
    char s[200000];
    long i=0,j=0,ans=0;

    scanf("%s",s);
    while(s[i]!='\0') {
        if(s[i]=='B') j++;
        else ans+=j;
        i++;
    }

    printf("%ld\n",ans);
    return 0;
} 