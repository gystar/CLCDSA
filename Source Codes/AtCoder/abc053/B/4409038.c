#include <stdio.h>
#include <string.h>
int main (){
char s[200002]={0};
scanf ("%s",s);
int ha=0,ow=0,i;
for (i=0;i<strlen(s);i++){
	if (s[i]=='A'){
		ha=i;
		break;
		}
		}
for (i=strlen(s)-1;i>-1;i--){
	if (s[i]=='Z'){
		ow=i;
		break;
		}
		}
	printf ("%d",ow-ha+1);
	return 0;
	} 