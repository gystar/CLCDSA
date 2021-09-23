#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a,const void *b){
return *(int *)b-*(int *)a;
}
int main(){
    int n,i,buf,ans=1;
    scanf("%d",&n);
    int d[n];
    for(i=0;i<n;i++)scanf("%d",&d[i]);
    qsort(d,n,sizeof(int),cmp);
    buf=d[0];
    for(i=1;i<n;i++){
    if(buf!=d[i]){
    ans++;
    buf=d[i];
    }
    }
    printf("%d",ans);
} 