#include <stdio.h>
int z[9999],r[9999];
int f(int a,int b){
	fflush(!printf("? %d %d\n",a,b));
	char c[2];
	scanf("%s",c);
	return*c=='Y';
}
int main(){
	int a,b,c=0,h,i;
	if(scanf("%d%d",&a,&b),a<=b){puts("Impossible");return 0;}
	for(i=a+=b;~--i;)!c||f(i,z[c-1])?(z[c++]=i):c--;
	for(h=*z,i=a;~--i;)r[i]=f(h,i);
	for(printf("! "),i=0;i<a;)printf("%d",r[i++]);
	puts("");
} 