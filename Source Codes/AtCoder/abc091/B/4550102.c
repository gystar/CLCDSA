#include <stdio.h>
#include <string.h>

int main(void){
	int n,m,max,count,x,y;
	char s[200][20],t[200][20];
	
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		scanf("%s",s[i]);
	}
	
	scanf("%d",&m);
	
	for(int i=0;i<m;i++){
		scanf("%s",t[i]);
	}
	
	max=0;
	
	
	for(int i=0;i<n;i++){
		
		count=0;
		
		for(int j=0;j<n;j++){
			
			if(strcmp(s[i],s[j])==0){
				count++;
			}
		}
		
		for(int j=0;j<m;j++){
			
			if(strcmp(s[i],t[j])==0){
				count--;
			}
		}
		
		if(count>max){
			max=count;
		}
	}
	printf("%d\n",max);
	
	return 0;
} 