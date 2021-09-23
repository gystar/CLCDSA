#include<stdio.h>
int sum(n){
  int s=0;
  while(n){
    s+=n%10;
    n/=10;
  }
  return s;
}
int main(n){
  scanf("%d",&n);
  puts(n%sum(n)?"No":"Yes");
} 