#include<stdio.h>

int main(){
char s[1001];scanf("%s",s);
int gen=0,i;
while(s[gen]!=0)gen++;
for(i=0;i<gen/2;i++){
if(s[i]=='*'||s[gen-1-i]=='*'||s[i]==s[gen-1-i]);
else {
puts("NO");
return 0;
}
}
puts("YES");
return 0;
} 