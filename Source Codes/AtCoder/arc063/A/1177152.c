#include <stdio.h>

char str[100001];
 int main(void)
 {
 	int res=0;
 	scanf("%s",str);
 	for(int i=1;str[i]!='\0';i++){
 		if(str[i-1]!=str[i]) res++;
 	}
 	printf("%d\n",res);
 	return 0;
 } 