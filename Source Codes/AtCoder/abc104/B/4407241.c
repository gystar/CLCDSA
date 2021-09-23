#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cmp(const char *a,const char *b){
  return *a-*b;
}
int main(){
  char s[11];
  scanf("%s",s);
  if(s[0]=='A'&&s[1]>='a'&&s[strlen(s)-1]>='a'){
    qsort(s,strlen(s),sizeof(s[0]),cmp);
    if(s[1]=='C'&&s[2]>='a'){
      puts("AC");
      return 0;
    }
  }
  puts("WA");
  return 0;
} 