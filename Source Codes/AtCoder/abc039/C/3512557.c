#include <stdio.h>
#include <string.h>
int main(void){
	char s[21];
	int i;
	scanf("%s",s);
	char ans[7][10]={"Do","Re","Mi","Fa","So","La","Si"},
		a[7][21]={	"WBWBWWBWBWBWWBWBWWBW","WBWWBWBWBWWBWBWWBWBW",
					"WWBWBWBWWBWBWWBWBWBW","WBWBWBWWBWBWWBWBWBWW",
					"WBWBWWBWBWWBWBWBWWBW","WBWWBWBWWBWBWBWWBWBW",
					"WWBWBWWBWBWBWWBWBWWB"};
	for(i=0;i<7;i++){
		if(strcmp(s,a[i])==0)break;
	}
	printf("%s",ans[i]);
	return 0;
} 