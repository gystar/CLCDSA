#include <stdio.h>
#include<string.h>

int main(void)
{
	int n,j,i,count=0;
	char x[101][10];
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%s",x[i]);
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<9;j++){
			if(x[i][j]=='x'){
				count++;
			}
		}
	}
	
	for(i=0;i<9;i++){
		for(j=0;j<n;j++){
			if(x[j][i]=='o'){
				count++;
				if(j!=0){
					if(x[j-1][i]=='o'){
						count--;
					}
				}
			}
		}
	}
	
	printf("%d\n",count);
	return 0;
} 