char *s[]={"No","Yes"};
char a;
int main(){
  a=1<<(getchar()-'a')*2;
  a+=1<<(getchar()-'a')*2;
  a+=1<<(getchar()-'a')*2;
  puts(s[a==21]);
} 