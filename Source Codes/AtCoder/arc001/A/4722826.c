#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a,const void *b){
    return *(int*)a-*(int*)b;
}
int main(void){
    int i,n,*a;
    char c[101];
    scanf("%d",&n);
    scanf("%s",c);
    a=(int*) malloc(sizeof(int)*4);
    for(i=0;i<4;i++){
        a[i]=0;
    }
    for(i=0;i<n;i++){
        a[c[i]-1-0x30]++;
    }
    qsort(a,4,sizeof(int),cmp);
    printf("%d %d\n",a[3],a[0]);
    free(a);
    return 0;
} 