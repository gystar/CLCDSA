#include <stdio.h>
int main(){
int a,b,c,d[8]={0};
scanf("%d%d%d",&a,&b,&c);
d[a]++;
d[b]++;
d[c]++;
if (d[5]==2 && d[7]==1){
printf("YES\n");
}
else printf("NO\n");
return 0;
} 