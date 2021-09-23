#include <stdio.h>
#include <string.h>
int main(void){
    long long ans=0,tmp=0;
    char s[200020];
    scanf("%s",s);
    for (int i=0; i<strlen(s); i++){
        if (s[i]=='B'){
            tmp++;
        } else {
            ans+=tmp;
        }
    }
    printf("%lld\n",ans);
	return 0 ;
} 