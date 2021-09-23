#include <stdio.h>
#include <string.h>
int main(void){
    char a[200020];
    scanf("%s",a);
    long long z[26]={},ans=strlen(a)*(strlen(a)-1)/2;;
    for (int i=0; i<strlen(a); i++){
        z[a[i]-'a']++;
    }
    for (int i=0; i<26; i++){
        ans-=z[i]*(z[i]-1)/2;
    }
    printf("%lld\n",ans+1);
    return 0;
} 