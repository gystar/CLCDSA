#include <stdio.h>
#include <string.h>
int main(void){
    int n,m,i,j,a,max=0;
    char s[100][11],t[100][11];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",s[i]);
    }
    scanf("%d",&m);
    for(i=0;i<m;i++){
        scanf("%s",t[i]);
    }
    for(i=0;i<n;i++){
        a=0;
        for(j=i;j<n;j++){
            if(strcmp(s[i],s[j])==0) a++;
        }
        for(j=0;j<m;j++){
            if(strcmp(s[i],t[j])==0) a--;
        }
        if(a>max) max=a;
    }
    printf("%d\n",max);
    return 0;
} 