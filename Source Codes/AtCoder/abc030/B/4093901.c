#include<stdio.h>

#define min(a,b) ((a)<(b)?(a):(b))

int main(){
	int n,m;
	float ji,hun,ans;
	scanf("%d%d",&n,&m);
	ji=(n%12)*30+m*(0.5);
	hun=m*6;
	if(ji>hun)ans=ji-hun;
	else ans=hun-ji;
	printf("%f\n",min(ans,360-ans));
	return 0;
} 