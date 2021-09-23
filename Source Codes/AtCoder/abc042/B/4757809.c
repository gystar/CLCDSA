#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmp(const void *a,const void *b){
    return strcmp(a,b);
}
int main(void){
    int n,l,i;
    char s[100][101];
    scanf("%d%d",&n,&l);
    for(i=0;i<n;i++){
        scanf("%s",s[i]);
    }
    qsort(s,n,sizeof(s[0]),cmp);
    for(i=0;i<n;i++){
        printf("%s",s[i]);
    }
    printf("\n");
    return 0;
} 