#include<stdio.h>
int main(){
	int y,m,d;
	scanf("%d %d %d",&y,&m,&d);
	if((m==1)||(m==2)){
		y--;
		m+=12;
	}
	printf("%d\n",735369-(365*y+(int)y/4-(int)y/100+(int)y/400+(int)(306*(m+1))/10+d-429));
} 