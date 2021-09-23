#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a,const void *b){
    return *(int*)a-*(int*)b;
}
int main(void){
    int n,l[200],sum=0,i;
    scanf("%d",&n);
    for(i=0;i<2*n;i++){
        scanf("%d",&l[i]);
    }
    qsort(l,2*n,sizeof(int),cmp);
    for(i=0;i<2*n;i+=2){
        sum+=(l[i]<l[i+1]?l[i]:l[i+1]);
    }
    printf("%d\n",sum);
    return 0;
} 