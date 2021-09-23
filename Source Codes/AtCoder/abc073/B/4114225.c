# include <stdio.h>

int main(){
  int n;
  int num = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++){
    int l, r;
    scanf("%d %d",&l, &r);
    num += r - l + 1;
  }
  printf("%d\n",num);
  return 0;
} 