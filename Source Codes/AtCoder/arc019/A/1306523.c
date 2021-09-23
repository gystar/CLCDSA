#include<stdio.h>
int main(){
	char i,j,s[10],d[][20]={"0123456789001258","0123456789ODIZSB"};//printf("%s %s\n",d[0],d[1]);
	scanf("%s",s);
	for(i=0;s[i];i++){
		for(j=0;d[1][j]-s[i];j++);
		printf("%c",d[0][j]);
	}//*/
	printf("\n");
	return 0;
} 