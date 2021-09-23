#include<stdio.h>

int main(void)
{
	int yyyy,mm,dd;

	scanf("%d/%d/%d",&yyyy,&mm,&dd);
	if(yyyy<=2018){
		printf("Heisei\n");
	}else if((yyyy<=2019) && (mm>=5)){
		printf("TBD\n");
	}else if((yyyy==2019) && (mm>=1) && (mm<=4)){
		printf("Heisei\n");
	}
return 0;
} 