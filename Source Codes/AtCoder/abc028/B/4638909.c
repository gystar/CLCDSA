s[9];main(i,a){for(;(a=getchar()-64)>0;)s[a]++;for(;i-7;)printf(i++-6?"%d ":"%d\n",s[i]);} ./Main.c:1:1: warning: data definition has no type or storage class
 s[9];main(i,a){for(;(a=getchar()-64)>0;)s[a]++;for(;i-7;)printf(i++-6?"%d ":"%d\n",s[i]);}
 ^
./Main.c:1:1: warning: type defaults to ‘int’ in declaration of ‘s’ [-Wimplicit-int]
./Main.c:1:6: warning: return type defaults to ‘int’ [-Wimplicit-int]
 s[9];main(i,a){for(;(a=getchar()-64)>0;)s[a]++;for(;i-7;)printf(i++-6?"%d ":"%d\n",s[i]);}
      ^
