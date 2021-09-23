int main(){
  int N,a,t,s=0;
  scanf("%d",&N);
  while(N--){
    scanf("%d",&a);
    asm volatile(
      "bsf %0,%1":"=r"(t):"r"(a)
    );
    s+=t;
  }
  printf("%d\n",s);
} 