#include <stdio.h>
int z[9999],r[9999];
int f(int a,int b){
	printf("? %d %d\n",a,b);
	fflush(stdout);
	char c[2];
	scanf("%s",c);
	return *c=='Y';
}
int main(){
	int a,b,c=0,q,h;
	scanf("%d%d",&a,&b);
	if(a<=b){puts("Impossible");return 0;}
	q=b+1;
	for(int i=0;i<a+b;i++){
		if(!c||f(z[c-1],i)){
			z[c++]=i;
			if(c>=q)break;
		}else{
			c--;
			q--;
		}
	}
	h=z[c-1];
	for(int i=0;i<a+b;i++){
		r[i]=h==i||f(h,i);
	}
	printf("! ");
	for(int i=0;i<a+b;i++)printf("%d",r[i]);
	puts("");
} 