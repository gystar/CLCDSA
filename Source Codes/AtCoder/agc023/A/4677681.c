typedef long unsigned int size_t;
extern int printf (const char *__restrict __format, ...);
extern int scanf (const char *__restrict __format, ...) ;
extern int getchar (void);
extern int putchar (int __c);
int nextInt(){int f=0;char s=0;char c=getchar();while((c<48)||(57<c)){if(c==45){s=1;c=getchar();break;}c=getchar();}while((48<=c)&&(c<=57)){f=f*10+(c-48);c=getchar();}return s?-f:f;}
short int nextShort(){short f=0;char s=0;char c=getchar();while((c<48)||(57<c)){if(c==45){s=1;c=getchar();break;}c=getchar();}while((48<=c)&&(c<=57)){f=f*10+(c-48);c=getchar();}return s?-f:f;}
long long int nextLong(){long long int f=0;char s=0;char c=getchar();while((c<48)||(57<c)){if(c==45){s=1;c=getchar();break;}c=getchar();}while((48<=c)&&(c<=57)){f=f*10+(c-48);c=getchar();}return s?-f:f;}
void println(){putchar(10);}
void print(char *f){while(*f){putchar(*f);f++;}}
void printInt(int f){char c[10];if(!f){putchar(48);return;}if(f<0){f=-f;putchar(45);}char i=0;while(f){c[++i]=(f%10)+48;f/=10;}while(i){putchar(c[i--]);}}
void printLong(long long int f){char c[19];if(!f){putchar(48);return;}if(f<0){f=-f;putchar(45);}char i=0;while(f){c[++i]=(f%10)+48;f/=10;}while(i){putchar(c[i--]);}}
typedef int (*__compar_fn_t) (const void *, const void *);
extern void *bsearch (const void *__key, const void *__base, size_t __nmemb, size_t __size, __compar_fn_t __compar)__attribute__ ((__nonnull__ (1, 2, 5))) ;
extern void qsort (void *__base, size_t __nmemb, size_t __size, __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
int compare_int(const void *a, const void *b){return *(int*)a - *(int*)b;}
int compare_long(const void *a, const void *b){if(*(long long int*)a - *(long long int*)b < 0){return -1;}else if(*(long long int*)a - *(long long int*)b > 0){return 1;}else{return 0;}}
int n, i;
long long int b[200001];
long long int ans, now;
char f;
int main(){
 n = nextInt();
 b[0] = 0;
 for(i=0; i<n; i++){
  b[i+1] = b[i] + nextInt();
 }
 qsort(b, n+1, sizeof(long long int), compare_long);
 for(i=0; i<n; i++){
  if(b[i+1]==b[i]){
   if(f){now++;}
   else{now=2; f=1;}
  }else{
   if(f){ans+=now*(now-1)/2; f=0;}
  }
 }
 if(f){ans+=now*(now-1)/2; f=0;}
 printLong(ans); println();
}