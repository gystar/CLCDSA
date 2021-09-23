#include<stdio.h>
#include<stdlib.h>

int main(void){
	int l,i,res = 0,f;
	char s[131072];
	scanf("%s",s);
	l = strlen(s);
	f = 0;
	for(i = 0;i < l;i++){
		if(i%2 == 0){if(s[i] == '0'){f++;}}
		else{if(s[i] == '+'){if(f == 0){res++;}f = 0;}}
	}
	if(f == 0){res++;}
	printf("%d\n",res);
	return 0;
} 