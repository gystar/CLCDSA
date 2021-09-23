#include <stdio.h>
int main (){
	int n=0,i,max=0,sum=0,k,h;
	char s[1001][21]={0};
	scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf ("%s", s[i]);
scanf("%d",&k);
sum = sum + k;
if(max<k){
	max=k;
	h=i;
	}
}
if (max*2>sum){
	printf ("%s\n",s[h]);
	}
	else
	{
		printf ("atcoder\n");
	}
	return 0;
	} 