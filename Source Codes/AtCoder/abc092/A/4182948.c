# include <stdio.h>

int min(int a,int b){
  int m=a;
  if (m>b) m=b;
  return m;
}

int main(){
  int a,b,c,d;
  scanf("%d%d%d%d",&a,&b,&c,&d);
  printf("%d\n",min(a,b)+min(c,d));
  return 0;
} 