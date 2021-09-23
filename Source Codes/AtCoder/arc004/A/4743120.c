#include<stdio.h>
#include<math.h>
int main(){
	
	int i,j,N,x[110],y[110];
	double d=0;
	scanf("%d",&N);
	
	for(i=0;i<N;i++){
	scanf("%d%d",&x[i],&y[i]);
	}
	
	
	
	for(i=0;i<N;i++){
		
		for(j=0;j<i;j++){
	if(sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]))>d){
		d=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
	}
	
	
		}
		for(j=i+1;j<N;j++){
	if(sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]))>d){
		d=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));		
			
			
		}
	}
	}
	
	printf("\n%f\n\n",d);
	
	return 0;
} 