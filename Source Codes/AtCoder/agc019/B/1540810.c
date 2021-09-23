#include<stdio.h>
int main(){
  char s[200010];
  long long i,l,c=0,b[30]={};
  scanf("%s",s);
  for(l=0;s[l];l++)b[s[l]-'a']++;//printf("a\n");
  for(i=0;i<26;i++){
    if(b[i])c+=(b[i]-0)*(b[i]-1)/2;
  }//printf("%lld %lld\n",c,l);
  printf("%lld\n",l*(l-1)/2-c+1);
  return 0;
} 