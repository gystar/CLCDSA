#include<stdio.h>
int n, m, x, y, ans, i;
int l[100001];
char is[100001];
int main(){
	scanf("%d%d", &n, &m);
	l[1]=1;
	is[1]=1;
	for(i=2; i<=n; i++){
		l[i]=1;
	}
	for(i=0; i<m; i++){
		scanf("%d%d", &x, &y);
		l[x]--;
		l[y]++;
		if(is[x]){
			is[y]=1;
		}
		if(l[x]==0){
			is[x]=0;
		}
	}
	for(i=1; i<=n; i++){
		ans+=is[i];
	}
	printf("%d\n", ans);
} 