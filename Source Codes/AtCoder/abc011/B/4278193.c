#include<stdio.h>
int main(void)
{
	int i;
	char a[13];
	scanf("%s",&a);
	if(a[0]>'Z'){
		a[0]=a[0]-32;
	}
	i=1;
	while(a[i]!=0){
		if(a[i]<'a'){
			a[i]=a[i]+32;
		}
		i++;
	}
	printf("%s\n",a);
	return 0;
} 