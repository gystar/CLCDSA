#include<stdio.h>
int main(void){
char x,y;
scanf("%s %s",&x,&y);
if(x<y){
printf("<\n");
}else if(x>y){
printf(">\n");
}else{
printf("=\n");
}
return 0;
} 