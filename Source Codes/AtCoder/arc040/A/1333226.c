#include <stdio.h>
int main(void){
    int n,i,j,red=0,blue=0,no=0;
    char s[100][100],d;
    scanf("%d",&n);
    for(i=0;i<n;i++){
            scanf("%s",s[i]);
    }
     for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(s[i][j]=='R') red++;
            else if(s[i][j]=='B') blue++;
            else no++;
        }
    }
    if(red>blue) printf("TAKAHASHI\n");
    else if(red<blue) printf("AOKI\n");
    else printf("DRAW\n");
    return 0;
} 