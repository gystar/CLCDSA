#include<stdio.h>
#include<string.h>
int main(){
  char w[111];
  int i,a[33]={};
  scanf("%s",w);
  for(i=0;i<strlen(w);i++){
    a[w[i]-97]++;
  }
  for(i=0;i<26;i++){
    if(a[i]%2) {
      i=0;
      break;
    }
  }
  puts(i?"Yes":"No");
} 