#include <stdio.h>
#include <string.h>

int main(void){
    char x[200020];
    scanf("%s",x);
    int counts=0,ans=strlen(x);
    for (int i=0; i<strlen(x); i++){
        if(x[i]=='T' && counts>0){
            counts--;
            ans-=2;
        }
        if(x[i]=='S'){
            counts++;
        }
    }
    printf("%d\n",ans);
	return 0 ;
} 