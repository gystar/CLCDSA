#include<stdio.h>
int s[26];
int main(){
 long n, i, a=1;
 scanf("%ld", &n);
 for(i=0, getchar(); i<n; i++) s[getchar()-'a']++;
 for(i=0; i<26; i++) a=(s[i]+1)*a%(1000000000+7);
 printf("%ld", a-1);
 return 0;
} 