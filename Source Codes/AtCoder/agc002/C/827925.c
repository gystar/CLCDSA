#include<stdio.h>
typedef long long ll;
int N,L;
ll s[100002];
int ans[100002];
int main(){
  int i,j;
  int a;
  scanf("%d %d",&N,&L);
    scanf("%d",&a);
    s[1] = a;
  for(i = 2; i <= N; i++){
    scanf("%d",&a);
    s[i] = s[i-1]+a;    
  }
 
  for(i = 2; i <= N; i++){
    if(s[i]-s[i-2] >= L)break;
  }
  if(i == N+1)printf("Impossible\n");
  else {
    printf("Possible\n");
    for(j = 1; j < i-1; j++){
      printf("%d\n",j);
    }
    for(j = N-1; j >= i; j--){
      printf("%d\n",j);
    }
    printf("%d\n",i-1);
  }
    return 0;
} 