#include <stdio.h>

int main(){
	char str[55];
	int f = 1;
	scanf("%[^\n]", str);
	for(int i = 0; str[i] != '\0'; i++){
		if(str[i] == 'c'){
			i++;
			if(str[i] == 'h')
				continue;
			else{
				f = 0;
				break;
			}
		}
		if(str[i] == 'o')continue;
		if(str[i] == 'k')continue;
		if(str[i] == 'u')continue;
		f = 0;
		break;
	}
	if(f)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
} 