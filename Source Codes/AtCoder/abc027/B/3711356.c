#include<stdio.h>

int main(){
int n,a[100],i,sum=0,ans=0;scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&a[i]);
sum+=a[i];
}
if(sum%n!=0){
ans=-1;
}else{
int tmp=0;
for(i=0;i<n;i++){
tmp+=sum/n-a[i];
if(tmp!=0)ans++;
}
if(tmp!=0)ans++;
}
printf("%d\n",ans);
return 0;
} 