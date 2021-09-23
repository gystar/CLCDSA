#include <stdio.h>


int main(){
	int h,m;
	int hour,min;
	hour = 17;
	min = 60;
	scanf("%d %d\n",&h,&m);
	hour -=h;
	min -=m;
	if(m==60){
		min=0;
		hour++;
	}
	printf("%d\n",hour*60+min);
} 