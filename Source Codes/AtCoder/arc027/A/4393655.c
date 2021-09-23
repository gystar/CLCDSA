#include<stdio.h>

int main(){
		int h,m;
		scanf("%d%d",&h,&m);
		printf("%d\n",h==18?0:((17-h)*60+(60-m)));
		return 0;
} 