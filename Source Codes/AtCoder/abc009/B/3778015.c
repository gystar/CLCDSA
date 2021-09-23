#include<stdio.h>
#include<stdlib.h>
int compare(const void *a , const void *b){
    return *(int*)b-*(int*)a;
}
int main(){
    int n,a[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    qsort(a,n,sizeof(int),compare);
    for(i=0;i<n;i++){
        if(a[i+1]<a[i]){
            printf("%d\n",a[i+1]);
            return 0;
        }
    }
    } 