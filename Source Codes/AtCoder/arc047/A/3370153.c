#include <stdio.h>
int main(void){
    int n,l,ans=0,tab=1;
    scanf("%d%d",&n,&l);
    char s[n+1];
    scanf("%s",s);
    for (int i=0; i<n; i++){
        if (s[i]=='+'){
            tab++;
        } else {
            tab--;
        }
        if (tab>l){
            ans++;
            tab=1;
        }
    }
    printf("%d\n",ans);
    return 0;
} 