#include<stdio.h>
char *P[]={"No","Yes"};
char f;

int n, m;
char s[11], c, i;
int main(){
  scanf("%s", s);
  while(c=s[i++]){
    n=n*10+c-'0';
    m=m+c-'0';
  }
  f = (n%m)==0;
  puts(P[f]);
} 