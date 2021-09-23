#include<stdio.h>

int main(){
		int n,a,b,i,ans=0,d;scanf("%d%d%d",&n,&a,&b);
		char s[5];
		for(i=0;i<n;i++){
				scanf("%s %d",s,&d);
				if(s[0]=='E'){
						if(d>=a){
								if(d<=b){
										ans+=d;
								}else ans+=b;
						}else ans+=a;
				}
				if(s[0]=='W'){
						if(d>=a){
								if(d<=b){
										ans-=d;
								}else ans-=b;
						}else ans-=a;
				}
		}
		if(ans==0)puts("0");
		else if(ans>0){
				printf("East %d\n",ans);
		}else printf("West %d\n",(-1)*ans);
		return 0;
} 