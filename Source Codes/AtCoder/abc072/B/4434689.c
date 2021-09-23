char c, d;
int main(){
  c=getchar();
  while(c!=10&&d!=10){
    putchar(c);
    d=getchar();
    c=getchar();
  }
  putchar(10);
} 