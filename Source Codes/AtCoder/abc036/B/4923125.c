#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    char s[n][n];
    for(i=0;i<n;i++)scanf("%s",s[i]);
    for(j=0;j<n;j++){
    for(i=n-1;i>=0;i--)printf("%c",s[i][j]);
        printf("\n");
    }
} 