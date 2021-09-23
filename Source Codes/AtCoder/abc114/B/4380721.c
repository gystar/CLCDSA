#include <stdio.h>
#include <stdlib.h>
int main(){
int b,k,i,d=1000,x,y,z;
char a[11];
scanf ("%s ",a);
for(i=0;i< strlen(a)-2 ;i++)
{
x=a[i]-'0';
y=a[i+1]-'0';
z=a[i+2]-'0';
b=(100*x)+(10*y)+z;
if(d>abs(b-753)){
	d=abs(b-753);
	}
}
	printf ("%d",d);
	return 0;
	} 