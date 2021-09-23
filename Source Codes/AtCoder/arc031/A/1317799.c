#include <stdio.h>
#include <string.h>


int main(void)
{
	int i,lon,count=0;
	char name[101];
	scanf("%s",name);
	
	lon=strlen(name);
	
	if(lon%2==0){
		for(i=0;i<lon/2;i++){
			if(name[i]!=name[lon-1-i]){
				count++;
			}
		}
	} else{
		for(i=0;i<lon/2;i++){
			if(name[i]!=name[lon-1-i]){
				count++;
			}
		}
	}
	
	if(count==0){
		printf("YES\n");
	} else{
		printf("NO\n");
	}
	return 0;
} 