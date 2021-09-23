int compare_int(const void *a, const void *b){
    return *(int*)b - *(int*)a;
}

int n, m, x[100000], ans, sum, i;
int main(){
  scanf("%d%d", &n, &m);
  if(n>=m){
    puts("0");
    return 0;
  }
  for(i=0; i<m; i++){
    scanf("%d", x+i);
  }
  qsort(x, m, sizeof(int), compare_int);
  sum=x[0]-x[m-1];
  for(i=0; i<m-1; i++){
    x[i]=x[i]-x[i+1];
  }
  qsort(x, m-1, sizeof(int), compare_int);
  for(i=0; i<n-1; i++){
    ans+=x[i];
  }
  printf("%d\n", sum-ans);
} 