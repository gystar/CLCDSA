#include <stdio.h>

int main(void)
{
	char c,a,e,i,o,u;
	
	int x=0;
	
	scanf("%c",&c);
	
	char vowel[]={'a','e','i','o','u'};
	
	for(int i=0;i<5;i++){
		if(vowel[i]==c){
			x++;
		}
	}
	
	if(x!=0){
		printf("vowel\n");
	}else{
		printf("consonant\n");
	}
	
	return 0;
} 