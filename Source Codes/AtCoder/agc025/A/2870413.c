#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main(void){
    int n,ans=0;
    scanf("%d",&n);
    while (n>0){
        ans+=n%10;
        n/=10;
    }    
    if (ans==1){
        ans=10;
    }
    printf("%d\n",ans);
	return 0 ;
} 