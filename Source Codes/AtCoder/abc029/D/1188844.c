#include<stdio.h>

int main(void){
	int n,r=0,m,s=1;
	scanf("%d",&n);
	m = n;
	while(m != 0){
		if(m%10 == 0){r+=((m/10)*s);}
		else if(m%10 == 1){r+=((m/10)*s);r+=((n%s)+1);}
		else{r+=((1+(m/10))*s);}
		s*=10;
		m/=10;
	}
	printf("%d\n",r);
	return 0;
} 