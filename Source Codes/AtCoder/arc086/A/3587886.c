#include <stdlib.h>
#include <stdio.h>
int compare(const void *a,const void *b){
    return *(int*)b-*(int*)a;
}
int main()
{
    int i,k,n,a[200001]={0},tmp;
    long ans=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&tmp);
        a[tmp]++;
    }
    qsort(a,200001,sizeof(int),compare);
    for(i=k;i<200001;i++){
        ans+=a[i];
    }
    printf("%ld",ans);
    return 0;
} 