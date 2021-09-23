int main(void){
  int a,b,c,d;
  scanf("%d%d%d%d",&a,&b,&c,&d);
  int check1,check2,check3,check4;
  check1 = a-c;
  check2 = a-d;
  check3 = b-c;
  check4 = b-d;
  if(check1*check2*check3*check4)
  {
	puts("NO");
  }
  else
  {
    puts("YES");
  }
  return 0;
} 