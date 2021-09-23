#include<stdio.h>
char *P[]={"No","Yes"};
char f;

int a, b, i;
char c;
int main(){
	f=1;
	scanf("%d%d\n", &a, &b);
	for(i=0; i<a; i++){
		if(getchar()=='-'){f=0;}
	}
	if(getchar()!='-'){f=0;}
	for(i=0; i<b; i++){
		if(getchar()=='-'){f=0;}
	}
	puts(P[f]);
} 