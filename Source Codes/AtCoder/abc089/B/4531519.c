char *S[] = {"Three","Four"};
char f;
int n, i;
char c;
int main(){
  scanf("%d\n", &n);
  for(i=0; i<n; i++){
    scanf("%c", &c);
    if(c=='Y') f=1;
  }
  puts(S[f]);
} 