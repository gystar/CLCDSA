#include <stdio.h>

int main(){
	char n[20];
	scanf("%s",&n);
	int len = strlen(n);
	
	int all9 = 1; // all number *expect the first digil*   is 9
	for(char* i = n+1; *i != NULL; i++){
		if( *i != '9' ){
			all9 = 0;
			break;
		}
	}
	
	int ret = 9 * (len - 1);

	n[1] = NULL;
	ret += atoi( n );
	if( ! all9 ) ret -= 1;

	printf("%d\n", ret);
	
	return 0;
} 