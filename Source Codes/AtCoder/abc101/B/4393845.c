#include<stdio.h>
#include<math.h>
int main (){
char s[10]={0};
int shu=0,wa=0,ji[10]={0},i,j;
  scanf ("%s",s);
  for (i=0;i<strlen(s);i++){
   ji[i]= s[i]-'0';
  }
for (i=0;i<strlen(s);i++){
wa=wa+ji[i];
shu=shu+(ji[i]*pow(10,strlen(s)-i-1));
}
  if (shu%wa == 0){
  printf ("Yes");
  }
    else{
    printf ("No");
    }
   return 0; 
  } 