char c;
char a, b;
int main(){
  a=getchar();
  getchar();
  b=getchar();
  if(a<b){
    c='<';
  }else if(a>b){
    c='>';
  }else{
    c='=';
  }
  putchar(c);
  putchar(10);
} 