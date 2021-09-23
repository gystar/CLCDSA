#include<stdio.h>
int main()
{
    int a,b,c ;
    scanf ("%d%d%d",&a,&b,&c) ;
    for (int i=1; i>0; i++){
        if (a*i%b==c) {
            printf ("YES\n") ;
            exit (0) ;
        }
        if (i>1 && a*i%b==a%b){
            printf ("NO\n") ;
            exit (0) ;
        }
    }
    return 0 ;
} 