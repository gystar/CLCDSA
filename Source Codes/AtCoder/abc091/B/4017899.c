#include<stdio.h>

#define max(a,b) ((a)>(b)?(a):(b))

struct moji{
	int a;
	char name[11];
};

int str(char s[],char t[]){
	int i=0,gs=0,gt=0;
	while(s[gs]!=0)gs++;
	while(s[gt]!=0)gt++;
	if(gs!=gt)return 0;
	while(s[i]==t[i])i++;
	if(i!=gs)return 0;
	return 1;
}

int main(){
	int n,m,i,j,count=0,ans=0;
	char s[100][11],t[100][11];
	struct moji a[100];
for(i=0;i<100;i++)a[i].a=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%s",s[i]);
	scanf("%d",&m);
	for(i=0;i<m;i++)scanf("%s",t[i]);
	for(i=0;i<n;i++){
		for(j=0;j<count;j++){
			if(strcmp(s[i],a[j].name)==0){
				a[j].a++;
				break;
			}
		}
		if(j==count){
			a[count].a=1;
			strcpy(a[count].name,s[i]);
			count++;
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<count;j++){
			if(strcmp(t[i],a[j].name)==0)a[j].a--;
//			if(str(t[i],a[j].name)==1)puts("OK");
		}
	}
	for(i=0;i<count;i++)ans=max(ans,a[i].a);
//	for(i=0;i<count;i++)printf("%s,%d\n",a[i].name,a[i].a);
	printf("%d\n",ans);
	return 0;
} 