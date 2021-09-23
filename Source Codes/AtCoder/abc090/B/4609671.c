#include<stdio.h>

int main(void){
  int a,b,i,j,temp,tmp[5],ans=0;
  scanf("%d %d",&a,&b);
  for(i=a;i<=b;i++){
    temp=i;
    for(j=0;j<5;j++){
      tmp[j]=temp%10;
      temp/=10;
    }
    if(tmp[0]==tmp[4] && tmp[1]==tmp[3]) ans++;
  }
  printf("%d\n",ans);
  return 0;
} 