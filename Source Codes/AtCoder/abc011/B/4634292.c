#include <stdio.h>
int main (){
char s[13];
scanf ("%s",s);
for (int i;s[i]!=0;i++){
if (i==0 && s[i]<'z'+1 && s[i]>'a'-1) s[i]=s[i]+'A'-'a';
else if(i!=0 && (s[i]>'z' || s[i]<'a')) s[i]=s[i]+'a'-'A';
printf ("%c",s[i]);
}
printf ("\n");
return 0;
} 