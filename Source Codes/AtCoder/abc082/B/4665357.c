#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int scompare(const void *a,const void *b){
    return *(char*)a-*(char*)b;
}
int tcompare(const void *a,const void *b){
    return *(char*)b-*(char*)a;
}
int main(void){
    char s[101],t[101];
    int i;
    scanf("%s%s",s,t);
    qsort(s,strlen(s),sizeof(char),scompare);
    qsort(t,strlen(t),sizeof(char),tcompare);
    printf("%s\n",strcmp(s,t)<0?"Yes":"No");
    return 0;
} 