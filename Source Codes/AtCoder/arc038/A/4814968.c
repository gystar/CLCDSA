#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a,const void *b){
    return *(int*)b-*(int*)a;
}
int main(void){
    int n,i,*a,sum=0;
    scanf("%d",&n);
    a=(int*) malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    qsort(a,n,sizeof(int),cmp);
    for(i=0;i<n;i+=2){
        sum+=a[i];
    }
    printf("%d\n",sum);
    free(a);
    return 0;
} 