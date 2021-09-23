#include<stdio.h>
int main()
{
  int a, b, i;
  scanf("%d %d", &a, &b);
  char s[a+b+2];
  scanf("%s", s);
  for(i=0;i<a;i++){
    if(s[i]=='-'){
      printf("No\n");
      return 0;
    }else{}
    for(i=a+1;i<a+b+1;i++){
      if(s[i]=='-'){
        printf("No\n");
        return 0;
      }else{}
    }
  }
  if(s[a]!='-'){
    printf("No\n");
  }else{
    printf("Yes\n");
  }
  return 0;
} 