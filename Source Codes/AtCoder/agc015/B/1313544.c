#include <stdio.h>
#include <string.h>

int main(void){
    long long i = 0;
    long long ans = 0;
    long long n = 0;
    char s[100500] = {0};
    scanf("%s",s);
    n = strlen(s);
    ans += (n-1)*2;
    for(i=1;i<n-1;i++){
        if(s[i] == 'U'){
            ans += (n-1-i) + i*2; 
        }else{
            ans += (n-1-i)*2 + i;
        }
        //printf("%d\n",ans);
    }
    printf("%lld\n",ans);
    return 0;
} 