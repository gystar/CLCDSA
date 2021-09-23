#include<stdio.h>
#include<stdlib.h>

int main(){
		int a,b;
		scanf("%d%d",&a,&b);
		if(abs(a)>abs(b))puts("Bug");
		if(abs(a)<abs(b))puts("Ant");
		if(abs(a)==abs(b))puts("Draw");
		return 0;
} 