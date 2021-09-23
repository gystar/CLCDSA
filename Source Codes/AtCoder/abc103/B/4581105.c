#include <stdio.h>
#include <string.h>
int main (){
int i,a=0,j;
char k[101],l[101],b;
scanf ("%s",k);
scanf ("%s",l);
for (i=0;k[i]!=0;i++){
	if(strcmp(k,l)==0)
	{
	a++;
		break;	
	}
	b=k[0];
	for(j=0;k[j]!=0;j++)
	{
	k[j]=k[j+1];	
	}
	k[strlen(k)]=b;
}
if(a==1){
	printf ("Yes");}
	else
	{
		printf ("No");
	}
	return 0;
	} 