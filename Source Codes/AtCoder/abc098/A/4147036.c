# include <stdio.h>

int max(int a,int b){
  int M = a*b;
  if(M<a+b) M=a+b;
  if(M<a-b) M=a-b;
  return M;
}

int main(){
  int a,b;
  scanf("%d %d",&a,&b);
  printf("%d\n",max(a,b));
  return 0;
} 