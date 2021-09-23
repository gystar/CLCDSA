#include <stdio.h>
//printf("1\n");

int main(){
    int a,b,n;
//    printf("1\n");
    scanf("%d %d %d",&n,&a,&b);
    
    if(a>b || (n==1&&a!=b)){
        printf("0");
        return 0;
    }
    if(a==b){
        printf("1");
        
    }else{
        printf("%lld",(long long)(b-a)*(n-2)+1);
    }
    return 0;
} 