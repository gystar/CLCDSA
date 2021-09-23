#include <stdio.h>
#include <stdlib.h>
#include <search.h>

int compare_int(const void *p, const void *q){
    return *(int*)p - *(int*)q;
}

int main(){
    int i,j,N,temp,flg,ans;
    int a[100001];
    int *ptr;
    
    scanf("%d", &N);
    for(i=0;i<N;i++){
        scanf("%d", &a[i]);
        while(a[i]%2 == 0){
            a[i] = a[i]/2;
        }
    }

    // ???
    qsort(a,N,sizeof(int), compare_int);
  
    // ??????????
    ans=0;
    for(i=0;i<N;i++){
        if(a[i] == a[i+1]){
            continue;
        }
        else{
            ans++;
        }
    }
    
    printf("%d\n", ans);

    return 0;
} 