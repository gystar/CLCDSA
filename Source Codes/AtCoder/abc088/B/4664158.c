#include<stdio.h>
#include<stdlib.h>
int conpar(const int *val1, const int *val2);
int n,a[100],i,alice,bob;
int m = sizeof(a)/sizeof(a[0]);
int main(void){
    scanf("%d",&n);
    for(i = 0;i < n;i++){
        scanf("%d",&a[i]);
    }
    qsort(a,n,sizeof(int),conpar);
    for(i = 0;i < n;i++){
        if(i%2 == 0||i == 0){
      alice += a[i];
        }else{
            bob += a[i];
        }
    }
    printf("%d",alice-bob);

    return EXIT_SUCCESS;
}
int conpar(const int *vall,const int *val2){
    if (*vall < *val2){
        return 1;
    }else if( *vall ==*val2){
        return 0;
    }else{
        return -1;
    }
} 