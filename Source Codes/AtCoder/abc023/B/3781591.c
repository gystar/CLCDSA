#include<stdio.h>

int main(){
		int n;scanf("%d",&n);
		char s[101];scanf("%s",s);
		if(n%2==0){
				puts("-1");
				return 0;
		}
		else {
				int i,ans=0;
				for(i=0;i<n;i++){
						if(i==n/2){
								if(s[i]=='b'){
										printf("%d\n",ans);
										return 0;
								}
								else {
										puts("-1");
										return 0;
								}
						}
						if(s[i]=='c'&&s[n-i-1]=='a')ans++;
						else if(s[i]=='b'&&s[n-i-1]=='b')ans++;
						else if(s[i]=='a'&&s[n-i-1]=='c')ans++;
						else {
								puts("-1");
								return 0;
						}
				}
		}
} 