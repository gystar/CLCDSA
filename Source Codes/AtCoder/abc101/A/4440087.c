#include <stdio.h>

int main(){
    
    char a[4];
    int ans = 0;
    scanf("%s",a);
    for(int i=0; i<4; i++){
        if(a[i] == '+'){
            ans++;
        }else{
            ans--;
        }
    }
    printf("%d\n",ans);
    return 0;
} 