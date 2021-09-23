#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    char s[3];
    int ans = 700;
    scanf("%s",s);
    for(int i=0; i<3; i++){
        if(s[i] == 'o'){
            ans += 100;
        }
    }
    printf("%d\n",ans);
    return 0;
} 