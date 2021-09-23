#include <stdio.h>

int main()
{   int n;
    scanf("%d",&n);
    char s[n][n+1];
    for(int i=0;i<n;i++){
        scanf("%s",s[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=0;j--){
            printf("%c",s[j][i]);
        }
        printf("\n");
    }
    return 0;
} 