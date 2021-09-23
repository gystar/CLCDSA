#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int c;
	char a[3];
	char b[3];
	char str[9];
scanf("%s",a);
scanf("%s",b);
sprintf(str,"%s%s",a,b);
int d=atoi(str);
c=sqrt(d);
if(c*c==d){
	printf("Yes");
}else{
	printf("No");
}
return 0;
} 