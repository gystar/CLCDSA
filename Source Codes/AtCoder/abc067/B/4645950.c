#include <stdio.h>
#include <stdlib.h>
int compare(const void *a,const void *b){
    return *(int*)a-*(int*)b;
}
int main(void){
    int n,k,l[50],i,dist=0;
    for(i=0;i<50;i++){
        l[i]=0;
    }
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&l[i]);
    }
    qsort(l,50,sizeof(int),compare);
    for(i=1;i<=k;i++){
        dist+=l[50-i];
    }
    printf("%d\n",dist);
    return 0;
} 