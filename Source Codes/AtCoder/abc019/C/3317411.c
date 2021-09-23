#include <stdio.h>
#include <stdlib.h>
int assort(const void *a, const void *b){return *(int*)a-*(int*)b;}
int main(void){
    int n,ans=0,tmp=-1;
    scanf("%d",&n);
    int a[n];
    for (int i=0; i<n; i++){
        scanf("%d",&a[i]);
        while(a[i]%2==0){
            a[i]/=2;
        }
    }
    qsort (a,n,sizeof(int),assort);
    for (int i=0; i<n; i++){
        if (tmp<a[i]){
            tmp=a[i];
            ans++;
        }
    }
    printf("%d\n",ans);
	return 0 ;
} 