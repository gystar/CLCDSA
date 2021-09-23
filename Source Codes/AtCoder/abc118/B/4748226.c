#include<stdio.h>

int main(void){
 int n,m,k,i,j,sum;
  int a[30],count[30]={0};
  sum=0;
 scanf("%d %d",&n,&m);
 for(i=0;i<n;i++){
   scanf("%d",&k);
   for(j=0;j<k;j++){
    scanf("%d",&a[j]);
    count[a[j]]++;
   }
 }
	for(i=0;i<=m;i++){
		if(count[i]==n) 
		sum++;
	}
    printf("%d",sum);
    return 0;
 } 