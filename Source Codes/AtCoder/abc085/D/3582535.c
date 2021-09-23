#include <stdio.h>
#include <stdlib.h>

void sort(int ar[],int l,int r);

int compare(const void *a, const void *b){
	return *(int *)b - *(int *)a;
}

int main(void){

	int n,h,i,j,tmp,max=0,cnt=0;

	scanf("%d %d",&n,&h);

	int a[n],b[n];

	for(i=0;i<n;i++){
		scanf("%d %d",&a[i],&b[i]);
		if(max<a[i]){
			max=a[i];
		}
	}

	qsort(b,n,sizeof(int),compare);
	
	for(i=0;h>0 && i<n && max<b[i];i++){
		h-=b[i];
		cnt++;
	}
	if(h>0){
		cnt+=h/max;
		if(h%max!=0){
			cnt++;
		}
	}

	printf("%d",cnt);

	return 0;

} 