#include<stdio.h>
int main(){
	int a[10],b,s=0,i;
	for(i=0;i<7;i++)scanf("%d",&a[i]);
	for(i=0;i<7;i++){
		scanf("%d",&b);
		s+=a[i]<b?b:a[i];
	}
	printf("%d\n",s);
	return 0;
} 