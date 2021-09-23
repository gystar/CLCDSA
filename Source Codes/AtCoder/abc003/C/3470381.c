#include <stdio.h>
#include <stdlib.h>
int compare(const void *a,const void *b){
    return *(int*)a - *(int*)b;  
}
int main(){
    int i,n,k,r[4001];
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&r[i]);
    }
    double ans=0;
    qsort(r,n,sizeof(int),compare);
    for(i=n-k;i<n;i++){
        ans=(ans+r[i])/2;
    }
    printf("%lf\n",ans);
return 0;
} 