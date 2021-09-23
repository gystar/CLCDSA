#include<stdio.h>

int maxi(int a,int b){
  if(a>b) return a;
  return b;
}

int main(void){
  int x=0,n,i,max=0;
  scanf("%d",&n);
  char s[n];
  scanf("%s",s);
  for(i=0;i<n;i++){
    if(s[i]=='I'){
      x++;
      max=maxi(x,max);
    }else x--;
  }
  printf("%d\n",max);
  return 0;
} 