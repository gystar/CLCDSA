#include <stdio.h>
int main(){
char s[116];
for (int i=0;i<116;i++){
scanf("%c",&s[i]);
}
printf("A%cC\n",s[8]);
return 0;
} 