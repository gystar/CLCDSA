#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void){
    int n;
    scanf("%d",&n);
    int ans=2*n;
    char s[n],t[n];
    bool wrong=false;
    scanf("%s%s",s,t);
    for (int i=0; i<n; i++){
        if (t[0]==s[i]){
            for (int j=0; j<n-i-1; j++){
                if (t[0+j]==s[i+j]){
                } else {
                    wrong=true;
                    break;
                }
            }
            if (wrong==false){
                ans=n+i;
                break;
            }
            wrong=false;
        }
    }
    printf("%d\n",ans);
	return 0 ;
} 