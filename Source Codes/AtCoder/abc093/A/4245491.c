#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int max(int a, int b){
  return a >= b ? a : b;
}
int min(int a, int b){
  return b >= a ? a : b;
}
int sei(int a){
  return a>0 ? a : 0;
}
int factorial(int n) {
    if (n > 0) return n*factorial(n - 1);
		else return 1;
}
int compare_up_int(const void *a, const void *b){
   return *(int*)a - *(int*)b;
}
int compare_down_int(const void *a, const void *b){
   return *(int*)b - *(int*)a;
}
int euclid(int a, int b){
  if(a < b){int tmp = a;a = b;b = tmp;}
  int r = a % b;
  if(r < 0) r += b;
  while(r != 0){
    a = b;b = r;r = a % b;
    if(r < 0) r += b;
  }
  return b;
}

int main(){
  char s[3];
  int c[3]={0,0,0};
  scanf("%s",s);
  for(int i=0;i<3;i++){
    if(s[i] == 'a')c[0]+=1;
    if(s[i] == 'b')c[1]+=1;
    if(s[i] == 'c')c[2]+=1;
  }
  if(c[0]==1 && c[1]==1 && c[2]==1)printf("Yes");
  else printf("No");
  return 0;
} 