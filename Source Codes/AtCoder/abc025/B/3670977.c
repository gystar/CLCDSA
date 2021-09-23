#include <stdio.h>
int D(a,b,d){
    if(d<a) return a;
    else if(b<d) return b;
    else return d;
}
int main(void){
    // Your code here!
    int n,a,b;
    scanf("%d %d %d\n",&n,&a,&b);
    
    int e=0,w=0,d;
    char s[5];
    for(int i=0;i<n;i++){
        scanf("%s %d\n",&s,&d);
        if(s[0]=='E'){
            e=e+D(a,b,d);
        }
        else{
            w=w+D(a,b,d);
        }
    }
    
    if(e>w) printf("East %d\n",e-w);
    else if(e<w) printf("West %d\n",w-e);
    else printf("0\n");
} 