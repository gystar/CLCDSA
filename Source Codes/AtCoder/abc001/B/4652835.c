#include <stdio.h>
int main(){
  int m;
  scanf("%d",&m);
  if (m<100) printf("00\n");
  else if (m<5001) printf("%02d\n",m/100);
  else if (m<30001) printf("%d\n",m/1000+50);
  else if (m<70001) printf("%d\n",m/5000+74);
  else printf("89\n");
  return 0;
} 