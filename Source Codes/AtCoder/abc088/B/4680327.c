#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a,const void *b){
    return *(int*)b-*(int*)a;
}
int main(void){
    int n,a[100]={0},i,A=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    qsort(a,n,sizeof(int),cmp);
    for(i=0;i<n;i+=2){
        A+=a[i]-a[i+1];
    }
    printf("%d\n",A);
    return 0;
} 