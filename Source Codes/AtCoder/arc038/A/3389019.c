#include <stdio.h>
#include <stdlib.h>
int dessort(const void *a, const void *b){
    return *(int*)b-*(int*)a;
}
int main(void){
    int n,ans=0;
    scanf("%d",&n);
    int a[n];
    for (int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    qsort (a,n,sizeof(int),dessort);
    for (int i=0; i<n; i+=2){
        ans+=a[i];
    }
    printf("%d\n",ans);
    return 0;
} 