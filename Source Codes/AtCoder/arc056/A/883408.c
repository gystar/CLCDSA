#include<stdio.h>
int main(void){
	long long int mit,mitn,mis,misk,misk2,misn,goukei,betu,siharai,siharai2;
	
	scanf("%lld %lld %lld %lld",&mitn,&misn,&goukei,&mis);
	
	misk = goukei / mis;
	mit = goukei % mis;
	
	siharai = (misk*misn) +(mit*mitn) ;
	
	misk2 = misk + 1;
	siharai2 = misk2 * misn;
	if(siharai>siharai2){printf("%lld",siharai2);
	}
	else{printf("%lld",siharai);
	}
	return 0;
} 