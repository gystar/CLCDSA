#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	int a;
	scanf("%d",&n);
	int even = 0,odd = 0;
	for(int i = 0;i<n;i++){
		scanf("%d",&a);
		if(a % 2){
			odd++;
		}else{
			even++;
		}

		if(odd == 2){
			odd = 0;
			even++;
		}
		if(even==2)even = 1;
	}

	if((even + odd) == 1){
		printf("YES\n");
	}else{
		printf("NO\n");
	}

	return 0;
} 