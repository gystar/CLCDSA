#include<stdio.h>

int main(){
int n,k,j,i,p[105],f=0;
scanf("%d",&n);
scanf("%d%d",&p[0],&p[1]);
scanf("%d",&k);
for(i=0;i<k;i++)scanf("%d",&p[i+2]);
for(i=0;i<k+2;i++){
for(j=i+1;j<k+2;j++){
if(p[i]==p[j]){
f=1;
break;
}
}
if(f==1)break;
}
if(f==0)puts("YES");
else puts("NO");
return 0;
} 