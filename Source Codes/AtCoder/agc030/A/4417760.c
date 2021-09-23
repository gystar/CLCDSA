int a, b, c;

int main(){
  scanf("%d%d%d", &a, &b, &c);
  if(a+b+1>=c){
    printf("%d\n", b+c);
  }else{
    printf("%d\n", a+b+b+1);
  }
} 