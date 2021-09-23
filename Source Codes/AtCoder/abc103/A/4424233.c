int max2(int a, int b){return a<b?b:a;}
int min2(int a, int b){return a>b?b:a;}
int max3(int a, int b, int c){return max2(a,max2(b,c));}
int min3(int a, int b, int c){return min2(a,min2(b,c));}
 

int A1, A2, A3, ans;
int main(){
  scanf("%d%d%d", &A1, &A2, &A3);
  ans = max3(A1, A2, A3) - min3(A1, A2, A3);
  printf("%d\n", ans); 
} 