#include<stdio.h>
int main(){
	int m[28]={0},i,k,n,a,b,c,ha=0;
	char s[102]={0};
	scanf ("%s",s);
	for (i=0;i<strlen(s);i++){
		m[s[i]-'a']++;
		}
		for (i=0;i<28;i++){
		if(m[i]%2==1){
		ha++;
			break;	
		}
		}
		if(ha==0)
		{
		printf ("Yes");}
		else
		{
			printf ("No");
		}
	return 0;
	} 