char c[2];
int main(){
  c[0]=getchar();
  c[1]=getchar();
  if(c[0]=='9' || c[1]=='9'){
    puts("Yes");
  }else{
    puts("No");
  }
} 