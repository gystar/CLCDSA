#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void){
  int a[26],i,j;
  char tmp,t[26]="abcdefghijklmnopqrstuvwxyz",s[100000];
  scanf("%s",s);
  for(i=0;i<26;i++){
    a[i]=1;
  }
  //for(i=0;i<26;i++) printf("%c",t[i]);
  for(i=0;i<strlen(s);i++){
    for(j=0;j<26;j++){
      if(s[i]==t[j]) a[j]=0;
    }
  }
  for(i=0;i<26;i++){
    if(a[i]==1){
      printf("%c\n",t[i]);
      return 0;
    }
  }
  printf("None\n");
  return 0;
} 