#include <stdio.h>
#include <stdlib.h>
int main(void){
    int n,i,j,r=0,b=0;
    char *s;
    scanf("%d",&n);
    s=(char*) malloc(sizeof(char)*(n+1));
    for(i=0;i<n;i++){
        scanf("%s",s);
        for(j=0;j<n;j++){
            if(s[j]=='R') r++;
            if(s[j]=='B') b++;
        }
    }
    printf("%s\n",r>b?"TAKAHASHI":(r<b?"AOKI":"DRAW"));
    free(s);
    return 0;
} 