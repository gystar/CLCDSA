#include <string.h>
#include <stdio.h>

int main(){
    int n,l;
    scanf("%d%d",&n,&l);
    char s[n+1];
    scanf("%s",s);
    int tab=1,crash=0;
    for(int i=0;i<n;i++){
        if(s[i]=='+'){
            tab++;
            if(tab==l+1){tab=1;
            crash++;}
        }else{
            tab--;
        }
    }
    printf("%d\n",crash);
    return 0;
} 