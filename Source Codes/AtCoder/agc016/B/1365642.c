#include <stdio.h>
#define trade(a,b)      (a)+=(b);(b)=(a)-(b);(a)-=(b);
main(){
        int N,ln=1,hn=1,l=-1,h=-1,tmp,i;
        scanf("%d",&N);
        for(i=0;i<N;i++){
                scanf("%d",&tmp);
                if(tmp==l)
                        ln++;
                else{
                        if(tmp==h)
                                hn++;
                        else if(l==-1)
                                l=tmp;
                        else if(h==-1){
                                h=tmp;
                                if(h<l){
                                        trade(h,l);
                                        trade(hn,ln);
                                }
                        }else{
                                puts("No");
                                return 0;
                        }
                }
        }
        if(l+1==h && ln+1<=h && h<=ln+hn/2){
                puts("Yes");
        }else if(ln==N && (l<=N/2 || l==N-1)){
                puts("Yes");
        }else{
                puts("No");
        }
        return 0;
} ./Main.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main(){
 ^
