#include <stdio.h>

int main(void){
    int n,a,cnt=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++) {
      scanf("%d",&a);
      for(;;) {
        if(a%2!=0 && a%3!=2) break;
        else if(a%2==0) {
          a--;
          cnt++;
        }
        else{
          a--;
          cnt++;
        }
      }
    }
    printf("%d\n",cnt);
} 