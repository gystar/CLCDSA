# include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);
  
  int s1, s2, s3, s4;
  s1 = n/1000;
  s2 = (n/100)%10;
  s3 = (n/10)%10;
  s4 = n%10;
  if((s1==s2 && s2==s3)||(s2==s3 && s3==s4)){
    printf("%s\n","Yes");
  }else{
    printf("%s\n","No");
  }
  return 0;
} 