#include <stdio.h>

int  main(void)
{
	
	char in,out;
	
	scanf("%c",&in);
	
	if(in=='A'){
		out='T';
	}else if(in=='T'){
		out='A';
	}else if(in=='G'){
		out='C';
	}else{
		out='G';
	}
	
	printf("%c",out);
	
	return 0;
} 