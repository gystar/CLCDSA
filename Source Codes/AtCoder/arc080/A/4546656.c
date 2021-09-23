#include<stdio.h>
int main(){
  int n,a=0,b=0,c=0,i,m;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&m);
    if     (m%4==0)c++;
    else if(m%2==0)b++;
    else           a++;
  }
  if(c==0&&a==0){
    printf("%s\n",b-1?"Yes":"No");
    return 0;
  }
  a+=b?1:0;
  printf("%s\n",c+1>=a?"Yes":"No");
  return 0;
} 