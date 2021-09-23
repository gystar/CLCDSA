long long int n, i;
char S[101];
int main(){
  scanf("%s%lld", S, &n);
  n--;
  for(i=0; i<n; i++){
    if(S[i]!='1') break;
  }
  printf("%c\n", S[i]);
} 