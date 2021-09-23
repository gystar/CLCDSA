#include<stdio.h>
#include<string.h>

int main(void){
  int n;
  int num[26],tmp[26];
  char str[55];
  int i,j,k,l;

  for(i=0;i<26;i++) num[i]=50;
  scanf("%d%*c",&n);
  while(n--){
    scanf("%s%*c",str);
    l=strlen(str);
    memset(tmp,0,sizeof(tmp));
    for(i=0;i<l;i++) tmp[str[i]-'a']++;
    for(i=0;i<26;i++) if(num[i]>tmp[i]) num[i]=tmp[i];
  }

  for(i=0;i<26;i++){
    while(num[i]--) putchar(i+'a');
  }

  putchar('\n');
  return 0;
} 