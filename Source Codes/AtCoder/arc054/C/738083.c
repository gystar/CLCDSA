#include<stdio.h>

int main(i,j,k,l,n,tmp){
	int a[201][201],c = 1;
	char s[10][10] = {"Even","Odd"};
	char ss[201];
	scanf("%d",&n);
	for(i = 0;i < n;i++){
		scanf("%s",ss);
		for(j = 0;j < n;j++){
			a[i][j] = ss[j] - '0';
		}
	}
	for(i = 0;i < n;i++){
		for(k = i;1/*a[k][i] == 0*/;k++){
			if(k == n){
				c = 0;
				break;
			}
			if(a[k][i] != 0)break;
		}
		if(!c)break;
		
		for(j = k+1;j < n;j++){
			if(a[j][i] == 1){
				for(l = 0;l < n;l++){
					a[j][l] ^= a[k][l];
				}
			}
		}
		for(j = 0;j < n;j++){
			tmp = a[i][j];
			a[i][j] = a[k][j];
			a[k][j] = tmp;
		}
	}
	printf("%s\n",s[c]);
	return 0;
} 