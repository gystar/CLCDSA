#include <stdio.h>
#include <stdlib.h>
int compare(const void *a,const void *b){
    return *(int*)b-*(int*)a;
}
int main(void){
    int n,k,l[50],i,dist=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&l[i]);
    }
    qsort(l,n,sizeof(int),compare);
    for(i=0;i<k;i++){
        dist+=l[i];
    }
    printf("%d\n",dist);
    return 0;
} 