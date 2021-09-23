#include <stdio.h>

int main(void)
{
	int H,W;
	int i,j,num=0;
	char a;

	scanf("%d %d",&H,&W);

	for(i=0;i<H;i++)
		for(j=0;j<W;j++){
			scanf(" %c",&a);
			if(a=='#'){
				num++;
			}
		}

	printf("%s\n",num==H+W-1 ? "Possible":"Impossible");
	return 0;
} 