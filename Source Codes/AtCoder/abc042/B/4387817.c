#include<stdio.h>
#include<string.h>
char s[110][11000];
char temp[11000];
int main(){
	int n,l,isSorted;
	while(~scanf("%d%d",&n,&l)){
		for(int i=0;i<n;i++){
			scanf("%s",s[i]);
		}
		for(int i=0;i<n-1;i++){
			isSorted = 1;
			for(int j=0;j<n-1-i;j++){
				if(strcmp(s[j],s[j+1])>0){
					memset(temp,'\0',sizeof(temp));
					strcpy(temp,s[j]);
					strcpy(s[j],s[j+1]);
					strcpy(s[j+1],temp);
					isSorted = 0;
				}
			}
			if(isSorted) break;
		}
		
		for(int i=0;i<n;i++)
			printf("%s",s[i]);
		printf("\n");
	}
} 