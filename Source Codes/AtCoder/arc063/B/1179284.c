#include <stdio.h>
#define INF 2000000000

 int main(void)
 {
 	int n,t,a;
 	int res=1,min=INF,diff=0;
 	scanf("%d %d",&n,&t);
 	for(int i=0;i<n;i++){
 		scanf("%d",&a);
 		if(a<min) min=a;
 		else if(a-min>diff) res=1,diff=a-min;
 		else if(a-min==diff) res++;
 	}
 	printf("%d\n",res);
 	return 0;
 } 