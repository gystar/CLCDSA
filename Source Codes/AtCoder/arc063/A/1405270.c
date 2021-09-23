#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define M 1000000007
int main(void){
    char s[100001];
    int i,ans=0;
    scanf("%s",s);
    int len=strlen(s);
    for(i=0;i<len-1;i++){
        if(s[i]!=s[i+1])ans++;
    }
    printf("%d\n",ans);
} 