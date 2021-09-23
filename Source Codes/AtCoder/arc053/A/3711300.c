#include<stdio.h>

int main(){
int h,w;scanf("%d%d",&h,&w);
int ans=0;
ans+=(w-1)*h;
ans+=(h-1)*w;
printf("%d\n",ans);
return 0;
} 