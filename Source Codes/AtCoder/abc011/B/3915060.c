#include <stdio.h>

const char diff = 'a' - 'A';

char Upper(char in){
	if('a' <= in)
		return in - diff;
	return in;
}

char Lower(char in){
	if(in <= 'Z')
		return in + diff;
	return in;
}

int main(){
	char name[15];
	scanf("%s", name);
	for(int i = 0; name[i] != '\0'; i++){
		if(i == 0)
			printf("%c", Upper(name[i]));
		else
			printf("%c", Lower(name[i]));
	}
	printf("\n");
	return 0;
} 