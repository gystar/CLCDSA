#include<stdio.h>

int main(){
	 int n,i;
 	 long long int sum=1;

    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum *=  i;
      if(sum >= 1000000007){
      		sum = sum % 1000000007;
    	}
    }
    printf("%lld",sum);
    return 0;
} 