#include<stdio.h>
    int main(void){
    	int n , x , ans ;
    	scanf("%d %d",&n,&x);
	if (  x  <= n / 2  ){
	ans = x - 1;
	}
	else{
	ans = n - x;
	}


    	printf("%d\n",ans );
    	return 0;
    } 