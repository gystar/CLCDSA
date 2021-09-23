#include<stdio.h>
char max(char a, char b){return a<b?b:a;}
short n, i;
char s[101];
char l[26], r[26], now, ans;
int main(void){
	scanf("%d\n", &n);
	register char c;
	c=getchar()-'a';
	s[0]=c;
	l[c]++;
	for(i=1; i<n; i++){
		c=getchar()-'a';
		s[i]=c;
		r[c]++;
	}
	if(r[s[0]]>0){ans=now=1;}
	for(i=1; i<n; i++){
		c=s[i];
		now+=(l[c]==0);
		l[c]++;
		r[c]--;
		now-=(r[c]==0);
		ans=max(ans, now);
	}
	printf("%d\n", ans);
} 