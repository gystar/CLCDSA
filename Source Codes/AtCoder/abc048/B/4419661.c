#include<stdio.h>

int main(){
	long long int a,b,x,count1,count2;
	scanf("%lld%lld%lld",&a,&b,&x);
    if(a == 0){
     count1 = 0;
     count2 = 1 + b/x;
     printf("%lld",count2-count1);
    }
    else{
     count1 = (a-1)/x;
     count2 = b/x;
     printf("%lld",count2-count1);
    }
    return 0;
} 