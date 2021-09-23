#include <stdio.h>
#include <stdlib.h>
int compare(const void *a,const void *b){
    return *(int*)a-*(int*)b;
}
int main(void){
    int a[3],i;
    for(i=0;i<3;i++){
        scanf("%d",&a[i]);
    }
    qsort(a,3,sizeof(int),compare);
    printf("%d\n",a[1]);
    return 0;
} 