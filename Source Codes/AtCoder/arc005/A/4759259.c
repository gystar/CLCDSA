#include <stdio.h>
#include <string.h>
int main(void){
    int n,i,ans=0;
    char s[101];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",s);
        if(strcmp(s,"TAKAHASHIKUN")==0 || strcmp(s,"Takahashikun")==0 || strcmp(s,"takahashikun")==0 || strcmp(s,"TAKAHASHIKUN.")==0 || strcmp(s,"Takahashikun.")==0 || strcmp(s,"takahashikun.")==0) ans++;
    }
    printf("%d\n",ans);
    return 0;
} 