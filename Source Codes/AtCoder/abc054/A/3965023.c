#include <stdio.h>
int main(void){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a==b) printf("Draw");
    else if(a>b||a==1) {
      if (b==1) {printf("Bob");}
      else printf("Alice");
    }
    else if(a<b||b==1) {
      if(a==1){printf("Alice");}
      else printf("Bob");
    }
    return 0;
} 