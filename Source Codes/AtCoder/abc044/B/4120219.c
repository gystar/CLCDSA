#include <stdio.h>
int main(void){
  char s[100];
  int t[100]={0},i;
 scanf("%s",s);
  for(i=0;s[i]!=0;i++){
    t[s[i]-'a']++;
  }
  for(i=0;i<27;i++){
    if(t[i]%2!=0) {printf("No");return 0;}
  }
  printf("Yes");
  return 0;
} 