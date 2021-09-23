#include<stdio.h>
int main(){
	int m[102]={0},i,k,n,a,b,c,ha=0;
	scanf ("%d%d%d%d",&k,&a,&b,&n);
	m[a]++;
	m[b]++;
	
	for (i=1;i<n+1;i++){
		scanf ("%d",&c);
		m[c]++;
		}
		for (i=1;i<k+1;i++){
		if(m[i]>1){
		ha++;
			break;	
		}
		}
		if(ha==0)
		{
		printf ("YES\n");}
		else
		{
			printf ("NO\n");
		}
	return 0;
	} 