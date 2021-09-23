char c;
int A, B, C, D, a, b;
char *s[]={"Right","Left","Balanced"};
int main(){
  scanf("%d%d%d%d", &A, &B, &C, &D);
  a=A+B;
  b=C+D;
  if(a<b){
    c=0;
  }else if(a>b){
    c=1;
  }else{
    c=2;
  }
  puts(s[c]);
} 